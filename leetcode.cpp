#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;


 int countNegatives(vector<vector<int>>& grid) {
            int count=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]<0){
                    count++;
                }
            }
        }
        return count;
    }
 int countSegments(string s) {
        int n = s.size();
        int fjala =0;

     
    for (int i = 0; i < n; i++) {
        if (s[i] != ' ') {
           
            if (i == 0 || s[i - 1] == ' ') {
                
                fjala++;
            }
        }
    }


        return fjala;
    }


 string finalString(string s) {
        string str = "";
        for (int i=0;i<s.length();i++){
            if(s[i]=='i'){
                reverse(str.begin(),str.end());
                
            }else str=str+s[i];
        }  return str;
    }


string removeTrailingZeros(string num) {
    int n = num.size();
    for (int i = n-1 ; i >= 0;i--){
        if(num[i]== '0'){
        num.erase(i,1);
        }else{
            break;
        }
    }
    return num;

    }


 int maximumWealth(vector<vector<int>>& accounts) {
   int rez = 0;
        for(int i =0;i<accounts.size();i++){
            int temp = 0;
            for(int j = 0;j<accounts[i].size();j++){
                temp+=accounts[i][j];
            }
            rez =max(rez,temp);
        }
        return rez;
    }


  vector<vector<int>> transpose(vector<vector<int>>& matrix) {
     int row = matrix.size();
    int col = matrix[0].size();
     vector<vector<int>> Transpose(col, vector<int>(row, -1));
   for(int i = 0; i < col; i++)
    {
        for(int j = 0; j < row; j++){
             Transpose[i][j] = matrix[j][i];
        }
    }
     return Transpose;
    }


  int diagonalSum(vector<vector<int>>& mat) {
           int sum=0;
        int n=mat.size();
        for(int i=0;i<n;i++){
          
                 sum+=mat[i][i];
                 sum+=mat[i][n-1-i];
            
        }
        if(n%2==1){
            sum-=mat[n/2][n/2];
        }

        return sum;
    }


  vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        if(original.size() != m*n) return {};

        int k =0;
        vector<vector<int>>matrix(m,vector<int>(n,0));
        for(int i =0;i<m;i++){
            for(int j =0;j<n;j++){
            matrix[i][j] = original[k++];
            }
        }
        return matrix;
    }


 bool isToeplitzMatrix(vector<vector<int>>& matrix) {
            int rows = matrix.size();
        int cols = matrix[0].size();

        for(int i=0; i<rows-1; i++){
            for(int j=0; j<cols-1; j++){
                if(matrix[i][j] != matrix[i+1][j+1]){
                    return false;
                }
            }
        }

        return true;
    }


 int strStr(string haystack, string needle) {
        return (int)haystack.find(needle);
    }


  int countOperations(int num1, int num2) {
      int num = 0;

    while (num1 > 0 && num2 > 0) {
        if (num1 > num2) {
            num1 = num1 - num2;
        } else {
            num2 = num2 - num1;
        }
        num++;
    }

    return num;
}


 int maximumProduct(vector<int>& nums) {
       int prodhim=1;
        int m=nums.size();

        sort(nums.begin(),nums.end());
            for (int i=0;i<m;i++){
                prodhim=prodhim*nums[i];
            }return prodhim;
        

    }


 vector<int> constructRectangle(int area) {
        int n = sqrt(area);
        while (area % n != 0){
            n--;
        }
        return {area/n,n};//area/n gjen lengj dhe n gjen width//

    }


   bool isPowerOfTwo(int n) {
       long  int rezultati = 1;
       
        while(rezultati <= n){
         rezultati*=2;
           if(rezultati ==n||n==1){
                return true;
            }
        }
        return false;

    }


  bool isPalindrome(int x) {
        string s=to_string(x);
        string rrot=s;
        reverse(rrot.begin(),rrot.end());
        if (rrot==s){
            return true;
        }
        else {
            return false;
        }
    
    }


   int majorityElement(vector<int>& nums) {

        sort(nums.begin(),nums.end());
      return nums[nums.size()/2];

    }


 int removeDuplicates(vector<int>& nums) {
         int j = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[i - 1]){
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }


 int removeElement(vector<int>& nums, int val) {
       int numri = 0;
        for(int i = 0; i< nums.size(); i++){
            if(nums[i] != val){
                nums[numri] = nums[i];
                numri++;
            }
        }
        return numri;
    }

 vector<int> plusOne(vector<int>& digits) {
        long int n=digits.size();
        for (int i=n-1;i>=0;i--){
            if (i==n-1)
            digits[i]++;
            if(digits[i]==10){
                digits[i]=0;
                if(i!=0){
                    digits[i-1]++;
                
                }else {
                    digits.push_back(0);
                    digits[i]=1;
                }
            }
        }
        return digits;
        
    }
  vector<int> twoSum(vector<int>& nums, int target) {
       int n =nums.size();
       for (int i=0;i<n-1;i++){
           for(int j=i+1;j<n;j++){
               if (nums[i]+nums[j]==target){
                   return {i,j};
               }
           }
        
           
       }
    
    return{};
    }


int main (){
    int n;
cout<<"Vendos se cilin nga funksionet do te perdoresh:1-countSegments ,2-finalString ,3-removeTrailingZeros ,4-maximumWealth ,5-transpose ,6-diagonalSum ,7-construct2DArray ,8-isToeplitzMatrix ,9-strStr ,10-countOperations ,"<<endl;
cout<<"11-maximumProduct ,12-constructRectangle ,13-isPowerOfTwo ,14-isPalindrome ,15-majorityElement ,16-removeDuplicates ,17-removeElement ,18-plusOne ,19-twoSum ,20-countNegatives"<<endl;
cin>>n;

  switch (n) {
        case 1: {
            cout << "vendos fjalin:" << endl;
            string s;
            cin.ignore(); // Ignore newline character left in the buffer
            getline(cin, s);
            int result = countSegments(s);
            cout << "numri i fjalve ehste : " << result << endl;
        break;
 }
        case 2: {
            cout << "vendos fjalen:" << endl;
            string s;
            cin >> s;
            string result = finalString(s);
            cout << result << endl;
         break;
 }
        case 3: {
            cout << "jep numrin:" << endl;
            int num;
            cin >> num;
            string result = removeTrailingZeros(to_string(num));
            cout << "Numri pas heqjes se zerojeve te fundit: " << result << endl;
         break;
 }
        case 4: {
            cout << "Vendos numrat per llogaritjen e pasurise maksimale (perfundon me -1):" << endl;
            vector<vector<int>> accounts;
            int num;
            while (cin >> num && num != -1) {
                vector<int> account;
                while (num != -1) {
                    account.push_back(num);
                    cin >> num;
                }
                accounts.push_back(account);
            }
            int result = maximumWealth(accounts);
            cout << "Pasuria maksimale eshte: " << result << endl;
         break;
 }
        case 5: {
            cout << "Vendos numrat per matricen (perfundon me -1):" << endl;
            vector<vector<int>> matrix;
            int num;
            while (cin >> num && num != -1) {
                vector<int> row;
                while (num != -1) {
                    row.push_back(num);
                    cin >> num;
                }
                matrix.push_back(row);
            }
            vector<vector<int>> result = transpose(matrix);
            cout << "Matrica e traspozuar eshte:" << endl;
            for (int i = 0; i < result.size(); i++) {
                for (int j = 0; j < result[i].size(); j++) {
                    cout << result[i][j] << " ";
                }
                cout << endl;
            }
         break;
         }
    case 11: {
        cout << "Vendos numrat per llogaritjen e prodhimit maksimal (perfundon me -1):" << endl;
        vector<int> nums;
        int num;
        while (cin >> num && num != -1) {
            nums.push_back(num);
        }
        int result = maximumProduct(nums);
        cout << "Prodhimi maksimal eshte: " << result << endl;
    break; }

    case 12: {
        cout << "Vendos fushe te drejtkendeshit:" << endl;
        int area;
        cin >> area;
        vector<int> result = constructRectangle(area);
        cout << "Drejtkendeshi me gjatesi " << result[0] << " dhe gjeresi " << result[1] << endl;
     break;
      }

    case 13: {
        cout << "Vendos numrin:" << endl;
        int num;
        cin >> num;
        bool result = isPowerOfTwo(num);
        if (result) {
            cout << "Numri eshte fuqi i dyte." << endl;
        } else {
            cout << "Numri nuk eshte fuqi i dyte." << endl;
        }
    break;
     }

    case 14: {
        cout << "Vendos numerin:" << endl;
        int num;
        cin >> num;
        bool result = isPalindrome(num);
        if (result) {
            cout << "Numri eshte palindrom." << endl;
        } else {
            cout << "Numri nuk eshte palindrom." << endl;
        }
     break; }

    case 15: {
        cout << "Vendos numrat per vektorin (perfundon me -1):" << endl;
        vector<int> nums;
        int num;
        while (cin >> num && num != -1) {
            nums.push_back(num);
        }
        int result = majorityElement(nums);
        cout << "Numri i shumices eshte: " << result << endl;
     break;
      }

    case 16: {
        cout << "Vendos numrat per vektorin (perfundon me -1):" << endl;
        vector<int> nums;
        int num;
        while (cin >> num && num != -1) {
            nums.push_back(num);
        }
        int result = removeDuplicates(nums);
        cout << "Numri i elementeve te ndryshme eshte: " << result << endl;
      break;
      }
    case 17: {
        cout << "Vendos numrat per vektorin dhe vleren qe do te heqesh (perfundon me -1):" << endl;
        vector<int> nums;
        int num;
        while (cin >> num && num != -1) {
            nums.push_back(num);
        }
        int val;
        cout << "Vendos vleren qe do te heqesh:" << endl;
        cin >> val;
        int result = removeElement(nums, val);
        cout << "Numri i elementeve pas heqjes se vleres eshte: " << result << endl;
     break;
      }

    case 18: {
        cout << "Vendos numrat per vektorin (perfundon me -1):" << endl;
        vector<int> digits;
        int num;
        while (cin >> num && num != -1) {
            digits.push_back(num);
        }
        vector<int> result = plusOne(digits);
        cout << "Numri i ri pas shtimit te nje eshte: ";
        for (int i = 0; i < result.size(); i++) {
            cout << result[i] << " ";
        }
        cout << endl;
    break;
     }

    case 19: {
        cout << "Vendos numrat per vektorin dhe numrin qe do te gjejesh (perfundon me -1):" << endl;
        vector<int> nums;
        int num;
        while (cin >> num && num != -1) {
            nums.push_back(num);
        }
        int target;
        cout << "Vendos numrin qe do te gjejesh:" << endl;
        cin >> target;
        vector<int> result = twoSum(nums, target);
        cout << "Indekset e numrave te gjetur jane: " << result[0] << " dhe " << result[1] << endl;
    break;
     }

    case 20: {
        cout << "Vendos numrat per matricen (perfundon me -1):" << endl;
        vector<vector<int>> grid;
        int num;
        while (cin >> num && num != -1) {
            vector<int> row;
            while (num != -1) {
                row.push_back(num);
                cin >> num;
            }
            grid.push_back(row);
        }
        int result = countNegatives(grid);
        cout << "Numri i numrave negativ ne matrice eshte: " << result << endl;
     break;
 }

        default:
            cout << "te thena te gabuara" << endl;
    }

    return 0;
}
