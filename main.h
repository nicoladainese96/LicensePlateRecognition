#include <iostream>
#include <vector>
#include <sstream>
#include <fstream>

#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/calib3d.hpp>

#include "preprocessing.h"
#include "PossibleChar.h"
#include "CharDetection.h"
#include "RectCluster.h"
#include "Clustering.h"
#include "graphics.h"
#include "plateRecognition.h"

using namespace std;
using namespace cv;

int main(int argc, char* argv[]);

string readResult();
