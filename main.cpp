#include "opencv2/highgui/highgui.hpp"
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
	imshow("MYWINDOW", img);

	waitKey(0);

	return 0;
}