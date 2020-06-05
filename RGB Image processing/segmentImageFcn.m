function [BW,maskedImage] = segmentImageFcn(im)

if size(im,3) == 3
	im = rgb2gray(im);
end
% Initialize segmentation with Otsu's threshold
level = graythresh(im);
mask = im2bw(im,level);
% Filter components by area
BW = bwareafilt(mask, [920 Inf]);
%BW = ~bwareafilt(~BW, [100 Inf]);
% Form masked image from input image and segmented image.
maskedImage = im;
maskedImage(~BW) = 0;
BW = ~BW;
end
