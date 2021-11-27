int solution(int number) 
{
  int sum=0;
  for(int i=3;i<number;i++){
    if(i%3==0){
      sum=sum+i;
          
        } 
    else if(i%5==0){
      sum=sum+i;

    }
    else if(i<0){
    return 0;

    }
    
  }
    return sum;

}
