class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
          if(size==1){
           return a[0];
       }
       int count=0;
       int temp=0;
     
       int ab=(int)(size/2);
       for(int i=0;i<size;i++){//3 1 3 3 2
           if(count==0){
               temp=a[i];//3 3
           }if(temp==a[i]){
               count++;}//2
               else{
               count--;}//1
           }
           for(int i=0;i<size;i++)
           {
               if(a[i]==temp)
               count++;
           }
       if(count>ab)
       return temp;
       else
       return -1;;
    }
};