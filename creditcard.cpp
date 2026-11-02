#include<iostream>
int getDigit(int num);
int sumEvenplaces(const std::string card_number);
int sumOddplaces(const std::string card_number);
int main(){
    std::string card_number;
    int result;
    std::cout<<"enter your credit card number: ";
    std::cin>>card_number;
    result=sumEvenplaces(card_number)+sumOddplaces(card_number);
    if(result%10==0){
        std::cout<<"valid credit card number"<<std::endl;
    }
    else{
        std::cout<<"invalid credit card number"<<std::endl;
    }
    return 0;

}
int getDigit(int num){
    return num%10 + (num/10%10);
}
int sumEvenplaces(const std::string card_number){
    int sum=0;
    for(int i=card_number.length()-2;i>=0;i=i-2){
        sum+=getDigit((int)(card_number[i]-'0')*2);
    }
    return sum;
}
int sumOddplaces(const std::string card_number){
    int sum=0;
    for(int i=card_number.length()-1;i>=0;i=i-2){
        sum+=getDigit((int)(card_number[i]-'0'));
    }
    return sum;
}