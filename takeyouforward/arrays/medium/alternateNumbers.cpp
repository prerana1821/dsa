// brute force approach
// time complexity - O(n + n/2)
// space complexity - O(n)
vector<int> alternateNumbersBrute(vector<int>& a, vector<int>& b){
  vector<int> ans;
  int i=0,j=0;
  while(i<a.size() && j<b.size()){
    ans.push_back(a[i]);
    ans.push_back(b[j]);
    i++;
    j++;
  }
  while(i<a.size()){
    ans.push_back(a[i]);
    i++;
  }
  while(j<b.size()){
    ans.push_back(b[j]);
    j++;
  }
  return ans;
}

// optimal approach
// time complexity - O(2n)
// space complexity - O(n)
// use two vectors to store the positive and negative integers and then iterate through the vectors and store the integers in the answer vector in the correct order by iterating through the vectors and storing the integers in the answer vector in the correct order
// if the size of the positive vector is greater than the size of the negative vector, then iterate through the negative vector and store the integers in the answer vector in the correct order and then iterate through the remaining elements of the positive vector and store them
// if the size of the negative vector is greater than the size of the positive vector, then iterate through the positive vector and store the integers in the answer vector in the correct order and then iterate through the remaining elements of the negative vector and store them

vector<int> alternateNumbersOptimal(vector<int>& a, vector<int>& b){
  vector<int> pos,neg;
  for(int i=0;i<a.size();i++){
    if(a[i]>0){
      pos.push_back(a[i]);
    }
    else{
      neg.push_back(a[i]);
    }
  }
  if(pos.size()>neg.size()){
    for(int i=0;i<neg.size();i++){
      a[2*i]=pos[i];
      a[2*i+1]=neg[i];
    }
    int index = 2*neg.size();
    for(int i=neg.size();i<pos.size();i++){
      a[index]=pos[i];
      index++;
    }
  } else {
    for(int i=0;i<pos.size();i++){
      a[2*i]=pos[i];
      a[2*i+1]=neg[i];
    }
    int index = 2*pos.size();
    for(int i=pos.size();i<neg.size();i++){
      a[index]=neg[i];
      index++;
    }
  }
  return a;
}

int main(){
  vector<int> a = {1, 2, 3, 4, 5};
  vector<int> b = {6, 7, 8, 9, 10};
  vector<int> result = alternateNumbersBrute(a, b);
  for(int i=0;i<result.size();i++){
    cout << result[i] << " ";
  }
  vector<int> resultOptimal = alternateNumbersOptimal(a, b);
  for(int i=0;i<resultOptimal.size();i++){
    cout << resultOptimal[i] << " ";
  }
  return 0;
}