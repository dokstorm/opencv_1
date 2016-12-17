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

	Size textsize = getTextSize("Hello, OpenCV!", FONT_HERSHEY_COMPLEX, 1, (255, 0, 0), 1, 8);
    Point org((window_width - textsize.width) / 2, (window_height - textsize.height) / 2);
	putText(img, "Hello, OpenCV!", FONT_HERSHEY_COMPLEX, 1, (255, 0, 0), 1, 8);
	namedWindow("MYWINDOW", CV_WINDOW_AUTOSIZE);
	imshow("MYWINDOW", img);

	waitKey(0);

	return 0;
}
