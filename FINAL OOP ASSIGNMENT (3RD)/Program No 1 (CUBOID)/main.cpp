#include "cuboids.cpp"

void write2File(Cuboids *cuboids,int size){
    fstream file;
    file.open("data.ssv",ios::app);
    for(int i = 0 ; i < size ; i++){
        cuboids[i].input();
        file << cuboids[i].getSide1() << ' ';
        file << cuboids[i].getSide2() << ' ';
        file << cuboids[i].getSide3() << '\n';
    }
    file.close();
}

void readFile(Cuboids *cuboids,int size){
    ifstream file;
    float s1,s2,s3;
    file.open("data.ssv");
    for(int i = 0 ; i < size ; i++){
        file >> s1 >> s2 >> s3;
        cuboids->setSide1(s1);
        cuboids->setSide2(s2);
        cuboids->setSide3(s3);
        cuboids++;
    }
    file.close();
}

int main(){
    int size = 10;
    Cuboids cuboids[size];

    // switch these functions carefully first use write2file after comment it

    readFile(cuboids,size);
    //write2File(cuboids,size);
    //system("del data.ssv"); // because we want new data everytime 

    for (int i = 0 ; i < size ; i++){
        cout << cuboids[i];
    }
    return 0;
}
