#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;
    int main(int argc, char* argv[]){
        if(argc==1){
            cout<<"Configuration sadece  ../input.txt  ise her şey random"<<endl;
            cout<<"Configuration  ../input.txt r  ise her şeyi siz yazıyorsunuz"<<endl;
            cout<<"Configuration  ../input.txt s  ise masa sayısını ve gelen grup sayısını siz belirliyorsunuz gerisi random"<<endl;
            return 0;
        }
        ofstream outFile(argv[1]);
        if(argc==2) {

            srand(time(NULL));
            int n = rand() % 100000;
            outFile << n << endl;
            for (int i=0;i<n;i++) {
                if (i == n - 1) {
                    outFile << rand() % 100000<<endl;
                    break;
                }
                outFile << rand() % 100000 << " ";
            }

            int q = rand() % 100000;
            outFile << q << endl;
            for(int i = 0; i<q;i++){
                if (i == n - 1) {
                    outFile << rand() % 100000<<endl;
                    break;
                }
                outFile << rand() % 100000 << " ";
            }
        }else if(*argv[2] == 'n'){
            int n;
            cin >> n;
            outFile<<n<<endl;
            for(int i = 0;i<n;i++){
                int temp;
                if (i == n - 1) {
                    cin>>temp;
                    outFile << temp<<endl;
                    break;
                }
                cin>>temp;
                outFile << temp << " ";
            }
            int q;
            cin >> q;
            outFile<<q<<endl;
            for(int i = 0;i<q;i++){
                int temp;
                if (i == q - 1) {
                    cin>>temp;
                    outFile << temp<<endl;
                    break;
                }
                cin>>temp;
                outFile << temp << " ";
            }
        } else if(*argv[2] == 's'){
            int n;
            cin >> n;
            outFile<<n<<endl;
            for (int i=0;i<n;i++) {
                if (i == n - 1) {
                    outFile << rand() % 100000<<endl;
                    break;
                }
                outFile << rand() % 100000 << " ";
            }
            int q;
            cin >> q;
            outFile<<q<<endl;
            for(int i = 0; i<q;i++){
                if (i == n - 1) {
                    outFile << rand() % 100000<<endl;
                    break;
                }
                outFile << rand() % 100000 << " ";
            }
        }


        outFile.close();
        return 0;
    }
