



class Solution
{
 
//Function to get the maximum total value in the knapsack.
doublefractionalKnapsack(intW, Itemarr[], intn)
{
 
//1. sort Value/weight
Arrays.sort(arr,(a,b)->{
returnDouble.compare((double)(b.value)/(double)(b.weight), (double)(a.value)/(double)(a.weight));
});
 
intcurrWeight=0;
doublecurrValue=0;
 
//traverse the array
for(int i=0; i<n; i++){
 
if(currWeight+arr[i].weight<=W){
currWeight+=arr[i].weight;
currValue+=arr[i].value;
 
}else{
int remaining=W-currWeight;
currValue+= (double)(arr[i].value)/(double)(arr[i].weight) * (double)remaining;
break;
}
}
 
returncurrValue;
}
}

 


