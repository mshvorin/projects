#include <iostream>	
#include "imageio.h"
#include "funcs.h"


void invert(std::string input) {

  int img[MAX_H][MAX_W];
  int h, w;
  readImage(input, img, h, w); 
  int out[MAX_H][MAX_W];

  for(int row = 0; row < h; row++) {
    for(int col = 0; col < w; col++) {
      out[row][col] = 255 -img[row][col];
    		}
  	}
	
  
  writeImage(input,out, h, w);
}
void invertHalf(std::string input) {

  int img[MAX_H][MAX_W];
  int h, w;
  readImage(input, img, h, w);
  int out[MAX_H][MAX_W];

  for(int row = 0; row < h; row++) {
    for(int col = 0; col < w/2; col++) {
      out[row][col] = img[row][col];
    		}
  	}
    for(int row = 0; row < h; row++) {
    for(int col = w/2; col < w; col++) {
      out[row][col] = 255 - img[row][col];
    		}
  	}
  	
  writeImage(input,out, h, w);

}
void whiteBox(std::string input) {

  int img[MAX_H][MAX_W];
  int h, w;
  readImage(input, img, h, w); 
  int out[MAX_H][MAX_W];

  for(int row = 0; row < h; row++) {
    for(int col = 0; col < w; col++) {
      out[row][col] = img[row][col];
    		}
  	}
   for(int row = h/4; row < 3*h/4; row++) {
    for(int col = w/4; col < 3*w/4; col++) {
      out[row][col] = 255;
    		}
  	}
	
  writeImage(input ,out, h, w);
 

}
void whiteBoxOutline(std::string input) {

  int img[MAX_H][MAX_W];
  int h, w;
  readImage(input, img, h, w); 
  int out[MAX_H][MAX_W];

  for(int row = 0; row < h; row++) {
    for(int col = 0; col < w; col++) {
      out[row][col] = img[row][col];
    		}
  	}
   for(int row = h/4; row < h/4+1; row++) {
    for(int col = w/4; col < 3*w/4+1; col++) {
      out[row][col] = 255;
    		}
  	}
  for(int row = h/4; row < 3*h/4; row++) {
    for(int col = w/4; col < w/4+1; col++) {
      out[row][col] = 255;
    		}
  	}
   for(int row = h/4; row < 3*h/4; row++) {
    for(int col = 3*w/4; col < 3*w/4+1; col++) {
      out[row][col] = 255;
    		}
  	}
     for(int row = 3*h/4; row < 3*h/4+1; row++) {
    for(int col = w/4; col < 3*w/4+1; col++) {
      out[row][col] = 255;
    		}
  	}
  
  writeImage(input,out, h, w);

}
void scale(std::string input) {
  int img[MAX_H][MAX_W];
  int h, w;
  readImage(input, img, h, w); 
  int out[MAX_H][MAX_W];

  for(int row = 0; row < h; row++) {
    for(int col = 0; col < w; col++) {
      out[row][col] = 255 -img[row][col];
    		}
  	}
  writeImage(input,out, h, w);
}

void pixelate(std::string input) {
  int h;
  int w;
  int img[MAX_H][MAX_W];	
  readImage(input, img, h, w); 
  int out[MAX_H][MAX_W];

  for(int row = 0; row < h; row++) 
  {
    for(int col = 0; col < w; col++) 
    {
     out[row][col] = img[row][col];
     if ((col -1) % 2 == 0 && (row - 1) % 2 == 0) {
  	  out[row][col] = (img[row][col] + img[row - 1][col] + img[row][col - 1] + img[row - 1][col - 1])/4;
  	  out[row-1][col] = (img[row][col] + img[row - 1][col] + img[row][col - 1] + img[row - 1][col - 1])/4;
  	  out[row][col-1] = (img[row][col] + img[row - 1][col] + img[row][col - 1] + img[row - 1][col - 1])/4;
  	  out[row-1][col-1] = (img[row][col] + img[row - 1][col] + img[row][col - 1] + img[row - 1][col - 1])/4;
  	 		 }
  	 	 }
  	  }
  writeImage(input,out ,h, w);
 
}
