class Solution {
    
private:
    
 int value(char x)
 {
     if(x == 'I')
         return 1;
     
     if(x == 'V')
         return 5;
     
     if(x == 'X')
         return 10;
     
     if(x == 'L')
         return 50;
     
     if(x == 'C')
         return 100;
     
     if(x == 'D')
          return 500;
     
     if(x == 'M')
         return 1000;
     
     
     return -1;            
  }
    
public:
    int romanToInt(string s) {
        
        int num = 0;
        int n = s.size();
        
        for(int i = 0 ; i<n ; i++)
        {
            int sym1 = value(s[i]);
            
            if(i+1 < n)
            {
                int sym2 = value(s[i+1]);
            
            
            if(sym1 >= sym2)
            {
                 num = num + sym1;
            }
            else{
                num = num + sym2-sym1;
                i++;
            }
                
            }
            else{
                num = num + sym1;
            }
        }
        
       return num;    
    }
};
