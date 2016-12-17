#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc.hpp"
//#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

int main(int argc, const char** argv)
{
	Mat img = imread("2.jpg", CV_LOAD_IMAGE_UNCHANGED);

	if (img.empty()) {
		cout << "Error : Image cannot be loaded....." << endl;
		return -1;
	}

	namedWindow("MYWINDOW", CV_WINDOW_AUTOSIZE);
	Size textsize = getTextSize("Hello, OpenCV!", FONT_HERSHEY_COMPLEX, 1, 3, 0);
        Point org((img.cols - textsize.width) / 2, (img.rows - textsize.height) / 2);
	putText(img, "Hello, OpenCV!", org, FONT_HERSHEY_COMPLEX, 1, Scalar(255, 0, 0), 1, 8);
	
	imshow("MYWINDOW", img);

	waitKey(0);

	return 0;
}
