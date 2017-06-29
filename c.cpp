#include<opencv2/opencv.hpp>
#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#include<time.h>
using namespace cv;
using namespace std;
static void read_imgList(const string& filename) {
    std::ifstream file(filename.c_str(), ifstream::in);
    if (!file) {
        string error_message = "No valid input file was given, please check the given filename.";
        CV_Error(CV_StsBadArg, error_message);
    }
    string line;
	int i=0;
	ostringstream path;
	//path<<"C:\\Users\\zhh\\Desktop\\½µÎ¬Í¼Æ¬\\";
    while (getline(file, line)) {

		Mat image =imread(line,1);
		cout<<line<<endl;
	// Mat image=imread("C:\\Users\\zhh\\Desktop\\½µÎ¬Í¼Æ¬\\22.jpg",1);
		Mat reimage;
	// reimage.create(7,7,1);
		resize(image,reimage,Size(100,100),0,0,1);
		//namedWindow("org",WINDOW_NORMAL);
		//namedWindow("new",WINDOW_NORMAL);
		//imshow("org",image);
		//imshow("new",reimage);
		stringstream path;
		//string std::to_string(i);
	    path<<"C:\\Users\\zhh\\Desktop\\½µÎ¬Í¼Æ¬\\"<<i<<".jpg"<<endl;
		string path1;
		path>>path1;
		cout<<path1<<endl;
	//	string str="C:\\Users\\zhh\\Desktop\\½µÎ¬Í¼Æ¬\\";
		
		imwrite(path1,reimage);
        i++;//images.push_back(imread(line, 0));
    }
}
int main()
{
	clock_t start,end;
	double t;
	start =clock();
	read_imgList("C:\\Users\\zhh\\Desktop\\test.txt");
//\\\string a="nihaoa";
//a= a+"ni";
//cout<<a<<endl;
//Mat image=imread("C:\\Users\\zhh\\Desktop\\½µÎ¬Í¼Æ¬\\22.jpg",1);
//Mat reimage;
//reimage.create(7,7,1);
//resize(image,reimage,Size(70,70),0,0,1);
//namedWindow("org",WINDOW_NORMAL);
//namedWindow("new",WINDOW_NORMAL);
//imshow("org",image);
//imshow("new",reimage);
//imwrite("C:\\Users\\zhh\\Desktop\\222.jpg",reimage);
   end = clock();
t =(double)(end-start)/(CLOCKS_PER_SEC);
cout<<t<<endl;
waitKey();
int i;
cin>>i;

system("paues");
//destroy();
return 0;
}