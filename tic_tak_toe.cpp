#include<iostream>
#include<ctime>
void displayBoard(std::string *board);
void playermove(std::string *board);
void computermove(std::string *board);
bool checkwin(std::string *board, std::string mark);
bool checktie(std::string *board);
int main(){
    std::string board[9] = {" ", " ", " ", " ", " ", " ", " ", " ", " "};
    displayBoard(board);
    bool game=true;
    while(game){
        playermove(board);
        displayBoard(board);
        if(checkwin(board,"X")){
            std::cout<<"congratulations! you win!"<<std::endl;
            break;
        }
        else if(checktie(board)){
            std::cout<<"it's a tie!"<<std::endl;
            break;
        }
        computermove(board);
        displayBoard(board);
        if(checkwin(board,"O")){
            std::cout<<"computer wins! better luck next time!"<<std::endl;
            break;
        }
        else if(checktie(board)){
            std::cout<<"it's a tie!"<<std::endl;
            break;
        }
    }
    return 0;
}
void displayBoard(std::string *board){
    std::cout<<"-----------------"<<std::endl;
    std::cout<<"     |     |     "<<std::endl;
    std::cout<<"  "<<board[0]<<"  |  "<<board[1]<<"  |  "<<board[2]<<"  "<<std::endl;
    std::cout<<"     |     |     "<<std::endl;
    std::cout<<"-----------------"<<std::endl;
    std::cout<<"     |     |     "<<std::endl;
    std::cout<<"  "<<board[3]<<"  |  "<<board[4]<<"  |  "<<board[5]<<"  "<<std::endl;
    std::cout<<"     |     |     "<<std::endl;
    std::cout<<"-----------------"<<std::endl;
    std::cout<<"     |     |     "<<std::endl;
    std::cout<<"  "<<board[6]<<"  |  "<<board[7]<<"  |  "<<board[8]<<"  "<<std::endl;
    std::cout<<"     |     |     "<<std::endl;
    std::cout<<"-----------------"<<std::endl;
}
void playermove(std::string *board){
    int move;
    do{
        std::cout<<"enter your move (1-9): ";
        std::cin>>move;
        move--;
        if(board[move]!=" "){
            std::cout<<"invalid move! try again"<<std::endl;
        }
    }while(move<0 || move>8 || board[move]!=" ");
    board[move]="X";
    }

void computermove(std::string *board){
    srand(time(0));
    int move;
    do{
        move=rand()%9;
        if(board[move]==" "){
           board[move]="O";
           break;
        }
        
    }while(board[move]!=" ");
    
}
bool checkwin(std::string *board, std::string mark){
    if(board[0]!=" " && board[0]==mark && board[1]==mark && board[2]==mark){
        return true;
    }
    else if(board[3]!=" " && board[3]==mark && board[4]==mark && board[5]==mark){
        return true;
    }
    else if(board[6]!=" " && board[6]==mark && board[7]==mark && board[8]==mark){
        return true;
    }
    else if(board[0]!=" " && board[0]==mark && board[3]==mark && board[6]==mark){
        return true;
    }
    else if(board[1]!=" " && board[1]==mark && board[4]==mark && board[7]==mark){
        return true;
    }
    else if(board[2]!=" " && board[2]==mark && board[5]==mark && board[8]==mark){
        return true;
    }
    else if(board[0]!=" " && board[0]==mark && board[4]==mark && board[8]==mark){
        return true;
    }
    else if(board[2]!=" " && board[2]==mark && board[4]==mark && board[6]==mark){
        return true;
    }
    else{
        return false;
    }
}
bool checktie(std::string *board){
    for(int i=0;i<9;i++){
        if(board[i]==" "){
            return false;
        }
    }
    return true;
}