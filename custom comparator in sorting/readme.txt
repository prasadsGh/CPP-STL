suppose you want to sort the pair <int,string>
but in the question they have given the condition that sort the function 

with following two conditions 
-->if difference between two integers is greater than 10 then the one with higher marks 
should appear on the top
-->other wise just sort them lexigraphically

SOLUTION :

here the custom comparator is used to sort the 
vector<pair<int,string>>vp;

//custom comparator

bool custom_comp(pair<int, string>a, pair<int,string>b)
{
    //sorting accorng to the first condition
    if(abs(a.first-b.first)>10)
     return a.first>b.second;
    //sorting according to the second condition
    else 
    return a.second<b.second;
}

//after this we sort the the array in following way

sort(vp.begin(),vp.end(),custom_comp);



// note  
suppose i want to sort the array in any specific condition 
you can mention it in the custom function 
