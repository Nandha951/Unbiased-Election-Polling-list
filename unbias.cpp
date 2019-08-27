#include <bits/stdc++.h> 
using namespace std; 

unordered_map<char, int> h; 

bool compare(string x, string y) 
{ 
	for (int i = 0; i < min(x.size(), y.size()); i++) { 
		if (h[x[i]] == h[y[i]]) 
			continue; 
		return h[x[i]] < h[y[i]]; 
	} 
	return x.size() < y.size(); 
} 


int main() 
{ 
	string str = "RrWwQqOoJjMmVvAaHhBbSsGgZzXxNnTtCcIiEeKkUuPpDdYyFfLl"; 
	vector<string> v{ "Vignesh", "Logesh", "Jagadish", "Ganesh", "Ziva", "Walter", "Michael", "Raphael" }; 
  	h.clear(); 
	for (int i = 0; i < str.size(); i++) 
		h[str[i]] = i;	 

	sort(v.begin(), v.end(), compare); 

	for (auto x : v) 
		cout << x << " "; 	
	return 0; 
} 
