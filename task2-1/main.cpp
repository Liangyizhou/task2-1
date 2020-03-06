#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;
int main()
{
	cv::Mat src_color = imread("1.png");
	std::vector<cv::Mat> channels;//声明vector，作为分离后3个通道图像的保存容器
	cv::split(src_color, channels);//split函数分离图片的三个通道
	cv::Mat B = channels.at(0);//定义3个Mat容器获得3个通道的分离结果，
	cv::Mat G = channels.at(1);
	cv::Mat R = channels.at(2);

	cv::imshow("red", R);
	cv::imshow("blue", B);
	cv::imshow("green", G);
	cv::imshow("original Mat", src_color);

	waitKey(0);
	return 0;
}


