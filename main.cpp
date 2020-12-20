#include <iostream>
#include <algorithm>
#include <ctime>
#include <fstream>
using namespace std;


void mergeSortFunct(double tempArray[], int s);
void choosingMergeSort(double array1[], int left, int r);
void algeForQuickSort(double arr[], int e);
void printTheEntireArray(double tempArray[], int s);
void algForInsertSort(double tempArray[], int s);
void algForSelectSort(double tempArray[], int s);
void guidedalgeForQuickSort(double arr[], int lower, int upper);
time_t getValueOfTime();
void swapTheElements(double* e1, double* e2);
void algForbubble(double arr[], int s);


int main(int argc, char const *argv[]) {
  

    string s2;
    double *ArrayForSelect;
    double *ArrayForMerge;
    double *ArrayForQuick;
    double *startingArray;
    double *ArrayForbubble;
    double *algForInsertSortArr;
     ifstream inFile;
    int s = 0;
    double num;
    inFile.open(argv[1]);
    if (!inFile) {
        cout << "Error opening the input file: \"" << argv[1] << "\"" << endl;
        exit(EXIT_FAILURE);
    }

    inFile >> s;
    startingArray = new double[s];
    ArrayForSelect = new double[s];
   ArrayForMerge = new double[s];
    ArrayForQuick = new double[s];
    ArrayForbubble = new double[s];
    algForInsertSortArr = new double[s];
   
    tm* startN;
     tm* finNow;
    time_t startNow;
    time_t endNow;
       for (int a = 0; a < s; ++a) {
        inFile >> num;
        getline(inFile, s2);
     
        algForInsertSortArr[a] = num;
        ArrayForSelect[a] = num;
    }
    for(int j =0;j<s;j++)
    {
   startingArray[j] = num;
        ArrayForbubble[j] = num;
        ArrayForMerge[j] = num;
        ArrayForQuick[j] = num;
    }
    cout << "Running insetion Sort :  " << endl;
    cout << "this is the unsortedray:  ";

    printTheEntireArray(algForInsertSortArr, s);
    startNow = getValueOfTime();
    startN = localtime(&startNow);
    cout << "this is when it started: " << 1 + startN->tm_hour << " - " << 1 + startN->tm_min << " - " << 1 + startN->tm_sec << endl;
    algForInsertSort(algForInsertSortArr, s);
    endNow = getValueOfTime();
    finNow = localtime(&endNow);
    cout << "This is the sorted version:  ";
    printTheEntireArray(algForInsertSortArr, s);
    cout << "this is when it ended: " << 1 + startN->tm_hour << " - " << 1 + startN->tm_min << " - " << 1 + startN->tm_sec << endl;
    cout << "this is how long it took: " << difftime(startNow, endNow) << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "Running the bubble alg:  " << endl;
    cout << "this is the unsorted :  ";
    printTheEntireArray(ArrayForbubble, s);
    startNow = getValueOfTime();
    startN = localtime(&startNow);
    cout << "this is when it started: " << 1 + startN->tm_hour << "  -  " << 1 + startN->tm_min << "  -  " << 1 + startN->tm_sec << endl;
    algForbubble(ArrayForbubble, s);
    endNow = getValueOfTime();
    finNow = localtime(&endNow);
       cout << "This is the sorted version:  ";
    printTheEntireArray(ArrayForbubble, s);
    cout << "this is when it started: " << 1 + startN->tm_hour << "  -  " << 1 + startN->tm_min << "  - " << 1 + startN->tm_sec << endl;
    cout << "this is how long it took: " << difftime(startNow, endNow) << endl;
    cout << endl;
        cout << endl;
      cout << "running quick sort:  " << endl;
    cout << "this is the unsortedray:  ";
    printTheEntireArray(ArrayForQuick, s);
    startNow = getValueOfTime();
    startN = localtime(&startNow);
    cout << "this is when it started: " << 1 + startN->tm_hour << "  - " << 1 + startN->tm_min << " - " << 1 + startN->tm_sec << endl;
    algeForQuickSort(ArrayForQuick, s);
    endNow = getValueOfTime();
    finNow = localtime(&endNow);
        cout << "This is the sorted version:  ";
    printTheEntireArray(ArrayForQuick, s);
    cout << "this is when it ended: " << 1 + startN->tm_hour << " - " << 1 + startN->tm_min << " - " << 1 + startN->tm_sec << endl;
    cout << "this is how long it took: " << difftime(startNow, endNow) << endl;
    cout << endl;

    cout << "running Merge Sort :  " << endl;
    cout << "this is the unsortedray:  ";
    printTheEntireArray(ArrayForMerge, s);
    startNow = getValueOfTime();
    startN = localtime(&startNow);
    cout << "this is when it started: " << 1 + startN->tm_hour << " - " << 1 + startN->tm_min << "-" << 1 + startN->tm_sec << endl;
    mergeSortFunct(ArrayForMerge, s);
    endNow = getValueOfTime();
    finNow = localtime(&endNow);
    cout << "This is the sorted version:  ";
    printTheEntireArray(ArrayForMerge, s);
    cout << "this is when it ended: " << 1 + startN->tm_hour << "  " << 1 + startN->tm_min << " - " << 1 + startN->tm_sec << endl; 
    cout << "this is how long it took: " << difftime(startNow, endNow) << endl;
    cout << endl;
    cout << endl;
     cout << "running  sorting :  " << endl;
    cout << "this is the unsortedray:  ";
    printTheEntireArray(ArrayForSelect, s);
    startNow = getValueOfTime();
    startN = localtime(&startNow);
    cout << "this is when it started: " << 1 + startN->tm_hour << "  - " << 1 + startN->tm_min << "-  " << 1 + startN->tm_sec << endl;
    algForSelectSort(ArrayForSelect, s);
    endNow = getValueOfTime();
    finNow = localtime(&endNow);
      cout << "This is the sorted version:  ";
    printTheEntireArray(ArrayForSelect, s);
    cout << "this is when it ended: " << 1 + startN->tm_hour << "   -" << 1 + startN->tm_min << "  -" << 1 + startN->tm_sec << endl;
    cout << "this is how long it took: " << difftime(startNow, endNow) << endl;
    cout << endl;
cout << endl;
 
    return 0;
}
//this is for bubble sort
void algForbubble(double arr[], int s) {
    for (int z = 0; z < s; z++) {
        for (int a = 0; a < s - z - 1; a++) {
            if (arr[a] > arr[a + 1]) {

                swapTheElements(&arr[a], &arr[a + 1]);

            }
        }
    }
}

//this is selection sort
void algForSelectSort(double tempArray[], int s) {
    
    int o;
  
    for (int k = 0; k < s - 1; k++) {
        o = k;

        for (int f = k + 1; f < s; f++)
        {

            if (tempArray[f] < tempArray[o])
            {
            o = f;
            }
                
        }
        swapTheElements(&tempArray[o], &tempArray[k]);
    }
}
//this is the code for merge sort
void mergeSortFunct(double tempArray[], int s) {
int o=0;
    choosingMergeSort(tempArray, o, s);
}


void algeForQuickSort(double arr[], int e) {
  int o=0;
    guidedalgeForQuickSort(arr, o, e);
}
//this will help quick sort
void guidedalgeForQuickSort(double arr[], int lower, int upper) {
    if (lower < upper) {
        int piv = (lower - 1);

        for (int l = lower; l <= upper - 1; l++) {
            if (arr[l] <= arr[upper])
             {
                piv++;
                swapTheElements(&arr[piv], &arr[l]);
            }
        }
        swapTheElements(&arr[piv + 1], &arr[upper]);

        guidedalgeForQuickSort(arr, lower, piv - 1);

        guidedalgeForQuickSort(arr, piv + 1, upper);
    }
}
//this function will print the entire array
void printTheEntireArray(double tempArray[], int s) {
    for (int a = 0; a < s; a++)
{
        cout << tempArray[a] << "    ";
}
    cout << endl;
}

//merge sort code
void choosingMergeSort(double array1[], int left, int r) {
    if (left < r) {
        int middleIndex = left + (r - left) / 2;
        choosingMergeSort(array1, left, middleIndex);
        choosingMergeSort(array1, middleIndex + 1, r);
      
        int beginIndex = left;
          int firstIndex = 0;
        int secondArr = 0;
        int array1s = middleIndex - left + 1;
        int array2s = r - middleIndex;
        int leftArr[array1s], rArr[array2s];

     for (int j = 0; j < array2s; j++)
        {

        rArr[j] = array1[middleIndex + 1 + j];
        }
        for (int a = 0; a < array1s; a++)
        {

        leftArr[a] = array1[left + a];
        }

        while (firstIndex < array1s && secondArr < array2s) {
            if (leftArr[firstIndex] <= rArr[secondArr]) {
                array1[beginIndex] = leftArr[firstIndex];
                firstIndex++;
            } else {
                array1[beginIndex] = rArr[secondArr];


                secondArr++;
            }
            beginIndex++;
        }

        while (firstIndex < array1s) {
            array1[beginIndex] = leftArr[firstIndex];
                beginIndex++;
            firstIndex++;
        
        }
        while (secondArr < array2s) {
            array1[beginIndex] = rArr[secondArr];

             beginIndex++;
            secondArr++;
           
        }

    }
}
//element swap
void swapTheElements(double* e1, double* e2) {
    
    double temp = *e1;

    *e1 = *e2;

    *e2 = temp;
}
//this is for insertion sort
void algForInsertSort(double tempArray[], int s) {
    double curr;
    int w;
    for (int q = 1; q < s; q++) {
        curr = tempArray[q];

        w = q - 1;

        while (w >= 0 && tempArray[w] > curr) {

            tempArray[w + 1] = tempArray[w];

            w = w - 1;
        }

        tempArray[w + 1] = curr;
    }
}
time_t getValueOfTime() {

    return time(0);
}


