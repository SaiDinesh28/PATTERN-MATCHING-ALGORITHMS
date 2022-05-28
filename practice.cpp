#include<bits/stdc++.h>
using namespace std;
int Binsearch(int a[],int key){
	 int l=0,h=6,mid=l+(h-l)/2;
	 while(l<=h){
		 if(a[mid]==key) return mid;
		 else if(key>a[mid]) l=mid+1;
		 else h=mid-1;
		 mid=l+((h-l)/2);
	 }
	 return -1;
           
}
int firstocc(int a[],int key){
         int l=0,h=11,mid=l+(h-l)/2;
		 int ans=-1;
	 while(l<=h){
		 if(a[mid]==key) {
			 ans=mid;
			 h=mid-1;
			
			 
			 
			 
			  //return mid;
		 }
		 else if(key>a[mid]) l=mid+1;
		 else h=mid-1;
		 mid=l+((h-l)/2);
	 }
	 return ans;


}
int lastocc(int a[],int key){
         int l=0,h=11,mid=l+(h-l)/2;
		 int ans=-1;
	 while(l<=h){
		 if(a[mid]==key) {
			 ans=mid;
			// h=mid-1;
			l=mid+1;
			 
			 
			 
			  //return mid;
		 }
		 else if(key>a[mid]) l=mid+1;
		 else h=mid-1;
		 mid=l+((h-l)/2);
	 }
	 return ans;


}

int main(){
     int a[]={1,2,3,3,3,3,3,3,6,9,80,356};
	 int key=3;
	// cout<<firstocc(a,key)<<endl;
	// cout<<Binsearch(a,key)<<endl;
     cout<<lastocc(a,key)<<endl;    



}