function expandAxes(hndls,rotEnable)

if nargin == 0
	hndls = gca;
end
if nargin < 2
    rotEnable = 0;
end
warning('off','MATLAB:gui:latexsup:UnableToInterpretTeXString');
for ii = 1:numel(hndls)
    % Ignore any handles that are not of type axes
    if strcmp(get(hndls(ii),'type'),'axes')
        % Create a structure of handles for each axes in the list
        clear hndlSet;
        % The axes itself:
        hndlSet.ax = hndls(ii);
        % The parent figure
        tmp = hndls(ii);
		hndlSet.oldfig = ancestor(hndls(ii),'figure');
		allchildren = findall(hndls(ii));
        % All children WITH EMPTY BUTTONDOWNFCNs
		if isempty(get(allchildren,'buttondownfcn'))
			hndlSet.objectsOfInt = allchildren;
		else
			hndlSet.objectsOfInt = allchildren(cellfun(@isempty,get(allchildren,'buttondownfcn')));
		end
        % Modify buttondownfcns of all ("valid") axes and children
        set(hndlSet.objectsOfInt,'buttondownfcn',{@expandIt,hndlSet,rotEnable});
    end
end
%drawnow;
    function expandIt(varargin)
        hndlSet = varargin{3};
        rotEnable = varargin{4};
        selType = get(gcf,'SelectionType');
        parentWindowStyle = get(gcf,'WindowStyle');
        switch selType
            % EXPAND
            case 'normal'
                new_fig = figure('numbertitle','off',...
                    'name','CLICK ON THE FIGURE TO CLOSE AND CONTINUE; RIGHT-CLICK TO SAVE IMAGE IN BASE WORKSPACE!!!...',...
                    'units',get(hndlSet.oldfig,'units'),...
                    'windowstyle','normal',...
                    'position',get(hndlSet.oldfig,'position'),...
                    'color',get(hndlSet.oldfig,'color'),'toolbar','figure','tag','new_fig',...
                    'colormap',get(hndlSet.oldfig,'colormap'),'menubar','none',...
                    'toolbar',get(hndlSet.oldfig,'toolbar'));
                % Ignore default docking status, use that of parent
                set(new_fig,'buttondownfcn',@figureClicked,...
                    'WindowStyle',parentWindowStyle);
                new_ax = copyobj(hndlSet.ax,new_fig);
                set(new_ax,'units','normalized','position',[0.1 0.1 0.8 0.8]);
                % Click anywhere in the new figure to close it
                set(findobj(new_fig),'buttondownfcn',@figureClicked);
                if rotEnable
                    rotate3d(new_fig);
                    set(new_fig,'name','Close axis manually')
                end
            case 'alt'
                % RESET
                tmp = questdlg('Disable expandAxes capabilities for this axes?','Disable Expansion?','DISABLE','Cancel','DISABLE');
                if strcmp(tmp,'DISABLE')
                    set(hndlSet.objectsOfInt,'buttondownfcn','');
                end
        end
    end
    function figureClicked(varargin)
        selType2 = get(gcf,'SelectionType');
        switch selType2
            case 'normal'
                closereq
            case 'alt'
                try
					vn = createUniqueName('selectedImage');
                    tmpimg = findall(gcf,'type','image');
                    cdat = get(tmpimg,'cdata');
                    
                    if isempty(cdat)
                        beep;
                        tmpimg = getframe(gca);
                        cdat = tmpimg.cdata;
                        fprintf('Current axes includes a non-image!\nExtracting and exporting a snapshot of your data with |GETFRAME|.\n')
                    end
                    assignin('base',vn,cdat);
                    fprintf('Selected image written as %s to base workspace!\n',vn);
                catch %#ok
                    beep
                    disp('Unable to extract axes data!')
                end
        end
    end
end