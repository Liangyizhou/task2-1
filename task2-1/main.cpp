#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;
int main()
{
	cv::Mat src_color = imread("1.png");
	std::vector<cv::Mat> channels;//����vector����Ϊ�����3��ͨ��ͼ��ı�������
	cv::split(src_color, channels);//split��������ͼƬ������ͨ��
	cv::Mat B = channels.at(0);//����3��Mat�������3��ͨ���ķ�������
	cv::Mat G = channels.at(1);
	cv::Mat R = channels.at(2);

	cv::imshow("red", R);
	cv::imshow("blue", B);
	cv::imshow("green", G);
	cv::imshow("original Mat", src_color);

	waitKey(0);
	return 0;
}


