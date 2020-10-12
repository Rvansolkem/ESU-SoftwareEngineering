#include <bits/stdc++.h>
#include "ICard.h"

class Stack{
    private:
    std::stack<ICard> s;
    
    public:
        Stack(){
            while (! s.empty()){
                s.pop();
            }
        }
        
        void push(ICard c){s.push(c);}

        bool empty(){return (s.empty());}

        //will push new stack onto major stack from the top down
        void pushGroup(Stack t){
            while(!t.empty()){
                s.push(t.pop());
            }
        }
        
        //returns AND removes last element added
        ICard pop(){
            ICard temp=s.top();
            s.pop();
            return temp;
            
        }

        //returns top card
        ICard top(){return s.top();}

        ICard pop(int index){
           // to do  
        }

        ICard pop(std::string cardName){
            // to do 
        }

         // returns a slice
        Stack pop(int startIndex, int endIndex){
            // to do 
        } 
        
        int size(){return s.size();}
};