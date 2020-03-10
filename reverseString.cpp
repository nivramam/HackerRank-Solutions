void reverseString(string a,int start,int end)
{
    while(start<end){
        a[start]^=a[end];
        a[end]^=a[start];
        a[start]^=a[end];
        start++;
        end--;
    }
    cout<<"after:   "<<a;
}

int main() {
	string a;
	a = "nivi";
	int start =0;
	int end = a.length()-1;
	cout<<"before:  "<<a;
	reverseString(a,start,end);
	return 0;
}
