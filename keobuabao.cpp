#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <fcntl.h>
using namespace std;
int ham(int i){
	return rand() % i;
}
int main(){
	srand(time(NULL));
	string s;
	string t;
 cout <<"Hãy chọn kéo/búa/bao: " << endl; cin >> t;
	vector<int> vec1;
	vector<string> vec2;
	   for (int i = 0; i < 3; i++){
	 	vec1.push_back(i);
	 }
	    vec2.push_back("kéo");
	    vec2.push_back("búa");
	    vec2.push_back("bao");
 random_shuffle(vec1.begin(), vec1.end() );
 random_shuffle(vec1.begin(), vec1.end(),ham);
        s = vec2[ vec1[0] ];
  cout << "Máy đã chọn : " << s << endl;
  if( t == s){ cout << "Hoà";}
  if( t == "kéo"){
      if( s == "bao"){
          cout << "Bạn thắng ";
      } else if( s== "búa"){
          cout << "Máy thắng ";
      }
} if( t == "bao"){
      if( s == "búa"){
          cout << "Bạn thắng ";
      } else if( s == "kéo"){
          cout << "Máy thắng ";
      }
} if( t == "búa"){
      if( s == "kéo"){
          cout << "Bạn thắng ";
      } else if( s== "bao"){
          cout << "Máy thắng ";
      }
}
}