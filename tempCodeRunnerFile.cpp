vector<int>  randomVector(unsigned int N){	
    vector<int> v;
    for(unsigned int i = 0; i < N; i++) v.push_back(rand()%10);
    return v;
}

void showVector(vector<int>x){
	cout << "[";
	for(unsigned int i = 0; i < x.size() ; i++){
		cout << x[i];
		if(i == x.size()) cout << "]";
		else cout << " ";
	}
}

int dotProduct(vector<int> x,vector<int> y){
	int sum = 0;
	for(unsigned int i = 0; x.size(); i++) sum += x[i]*y[i];	
	return sum;
}