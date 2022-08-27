#include <iostream>
#include <fstream>
using namespace std;

class Generator{
    private:
        int length;
        string dtypes[30];
        string idents[30];
        string name;
    public:
        void input(){
           int size = 0;
           cout << "\nEnter the name of Class : ";
           cin >> name;

           cout << "\nEnter the number of Data Memebers : ";
           cin >> size;

           for(int i = 0 ; i < size ; i++){
               cout << "\nEnter Specifications of " << (i + 1) << " Member : " ;
               cout << "\nData Type : ";
               cin >> dtypes[i];
               cout << "\nName : ";
               cin >> idents[i];
           }
           length = size;
        }

        // Line No 1
        void write_starting(fstream* f){
            *f << "#include <iostream>\nusing namespace std;\n\nclass " << name << " {\n\tprivate:\n"; 
        }

        // Line No 2

        void write_body(fstream* f){
            for(int i = 0 ; i < length ; i++){
                *f << "\t\t" << dtypes[i];
                *f << " " << idents[i]  << ";\n";
            }
            *f << "\tpublic:\n";
        }

        // Line no 3
        void write_constructors(fstream* f){
            *f << "\t\t" << name << "(){}\n";
            *f << "\t\t" << name << "(";
            for(int i = 0 ; i < length ; i++){
                *f << dtypes[i] << " _" << idents[i];
                if (i != (length-1)){
                    *f << ", ";
                }
            }
            *f << "){\n";

            // Used to assign values
            for(int i = 0 ; i < length ; i++){
                *f << "\t\t\t" << idents[i] << " = " << "_" << idents[i] << ";\n" ;
            }
            *f << "\t\t}";
        }


        // Line no 4
        void writeInput(fstream* f){
            *f << "\n\t\tvoid input(){";
            for(int i = 0 ; i < length ; i++){
                *f << "\n\t\t\tcout << \"Enter Value of " << idents[i] << ": \";";
                *f << "\n\t\t\tcin >> " << idents[i] << ";";
                }
            *f << "\n\t\t}\n";
        }

        // Line no 5

        void writeOutput(fstream* f){
            *f << "\n\t\tvoid display(){";
            for(int i = 0 ; i < length ; i++){
                *f << "\n\t\t\tcout << \"Value of " << idents[i] << " : "  << "\" << " << idents[i] << "<< endl;";
                }
            *f << "\n\t\t}\n\n};";
        }

        // Line no 6

        void writeSetters(fstream* f){
            *f << "\n\n\t\t//Setters\n";
            for(int i = 0 ; i < length ; i++){
                *f << "\n\t\tvoid set_" << idents[i];
                *f << "(" << dtypes[i] << " _" << idents[i] << ")";
                *f << "{\n\t\t\t" << idents[i] << " = _" << idents[i] << ";\n\t\t}";
            }
        }


        // Line no 7

        void writeGetters(fstream* f){
            *f << "\n\n\t\t//Getters\n";
            for(int i = 0 ; i < length ; i++){
                *f << "\n\t\t" << dtypes[i] << " get_" << idents[i];
                *f << "(){";
                *f << "\n\t\t\t" << "return " << idents[i] << ";\n\t\t}";
            }
        }

        // Line no 8

        void writeFunction(fstream* f){
            *f << "\n\nint main(){";
            *f << "\n\t" <<name << " Obj;\n\tObj.input();\n\tObj.display();\n\treturn 0;\n}";
        }


        void generate(){
            fstream f;
            string path;
            path = name + ".cpp";
            f.open(path,ios::out);
            if(!f){
                cout << "File not created ! ";
            }
            else{
                write_starting(&f);
                write_body(&f);
                write_constructors(&f);
                writeSetters(&f);
                writeGetters(&f);
                writeInput(&f);
                writeOutput(&f);
                writeFunction(&f);
            }

        }
};

int main(){
    Generator G1;
    G1.input();
    G1.generate();
    return 0;
}