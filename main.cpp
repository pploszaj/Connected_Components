#include <iostream>
#include <fstream>

using namespace std;

struct Property {
    int label;
    int numPixels;
    int minR;
    int minC;
    int maxR;
    int maxC;
};

class CCLabel {
public:
    int numRows;
    int numCols;
    int minVal;
    int maxVal;
    int newLabel = 0;
    int trueNumCC;
    int newMin = 0;
    int newMax;
    int** zeroFramedArray;
    int nonZeroNeighborArray[5];
    int* EQArray;
    char option;
    Property* CCproperty;

    CCLabel(int rows, int cols, int min, int max) : numRows(rows), numCols(cols), minVal(min), maxVal(max){
        zeroFramedArray = new int* [numRows + 2];
        for (int i = 0; i < numRows + 2; i++) {
            zeroFramedArray[i] = new int[numCols + 2]();
        }

        EQArray = new int [(numRows * numCols) / 4];
        for (int i = 0; i < (numRows * numCols) / 4; i++){
            EQArray[i] = i;
        }

    }

    ~CCLabel() {
        // Destructor to free allocated memory
        for(int i = 0; i < numRows + 2; ++i) {
            delete[] zeroFramedAry[i];
        }
        delete[] zeroFramedAry;
        delete[] EQAry;
        delete[] CCproperty;
    }

    void zero2D(int** ary, int rows, int cols) {
        // Initialize ary to zero
    }

    void negative1D(int* ary, int size) {
        // Initialize ary to -1
    }

    void loadImage(string fileName) {
        // Load image data from file into zeroFramedAry
    }

    void conversion() {
        // Convert every pixel from 0 to 1 and 1 to 0 inside zeroFramedAry
    }

    void imgReformat(int** ary, ofstream& RFprettyPrintFile) {
        // Print ary to RFprettyPrintFile
    }

    void connect8Pass1() {
        // Implement the 8-connected pass 1 algorithm
    }

    void connect8Pass2() {
        // Implement the 8-connected pass 2 algorithm
    }

    void connect4Pass1() {
        // Implement the 4-connected pass 1 algorithm
    }

    void connect4Pass2() {
        // Implement the 4-connected pass 2 algorithm
    }

    void connectPass3() {
        // Implement the connected pass 3 algorithm
    }

    void updateEQ() {
        // Update EQAry for all non-zero neighbors to minLabel
    }

    int manageEQAry() {
        // Manage EQAry and return the true number of CCs
    }

    void printCCproperty(ofstream& propertyFile) {
        // Prints the component properties to propertyFile
    }

    void printEQAry(ofstream& outFile) {
        // Print EQAry with index up to newLabel
    }

    void drawBoxes() {
        // Draw bounding boxes of CC in zeroFramedAry
    }

    void printImg(ofstream& labelFile) {
        // Output image header and zeroFramedAry to labelFile
    }

    // Additional methods as required
};

int main(int argc, char* argv[]) {

    ifstream inputFile(argv[1]);
    ifstream connectedness(argv[2]);
    ifstream option(argv[3]);
    ofstream RFprettyPrintFile(argv[4]);
    ofstream labelFile(argv[5]);
    ofstream propertyFile(argv[6]);
    ofstream debugFile(argv[7]);

    int numRows, numCols, minVal, maxVal;
    inputFile >> numRows >> numCols >> minVal >> maxVal;

    CCLabel ccLabel(numRows, numCols, minVal, maxVal);





    return 0;
}


