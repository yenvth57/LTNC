#include <string>
#include <iostream>
using namespace std;


int main() {
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    int len_s = s.length();
    for (int count=0;count<m;count++){
        int start, end;
        cin >> start >> end;
        int len_sub = end+1-start;
        string sub_s = s.substr(start-1,len_sub);
        
        int max = 0;
        for (int i=start-1; i< len_s; i++){
            int index = i;
            int count = 0;
            while(index + len_sub <= len_s && s.substr(index, len_sub)==sub_s){
                count ++;
                index += len_sub;
            }
            if(count>max)
                max = count;
        }
        cout << max << endl;
    }
    return 0;
}
