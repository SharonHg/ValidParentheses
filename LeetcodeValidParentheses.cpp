class Solution {
public:
    bool isValid(string s) {
        if(s.size()%2!=0)
        return false;
        
        stack<char>lefts;
        for(int i = 0; i<s.size(); i++)
        {
            if(s.at(i)=='('||s.at(i)=='['||s.at(i)=='{')
            {
                lefts.push(s.at(i));
            }
            else
            {
                if(lefts.empty()==true)
                {
                    //cout<<"L18";
                    return false;
                }
                else 
                {
                    switch(lefts.top())
                    {
                        case '(':
                        //cout<<"L26";
                        if(s.at(i)!=')')
                        return false;
                        break;

                        case '[':
                        //cout<<"L31";
                        if(s.at(i)!=']')
                        return false;
                        break;

                        case '{':
                        //cout<<"L36";
                        if(s.at(i)!='}')
                        return false;
                        break;
                    }
                    lefts.pop();
                }
            
            }
        }

        if(lefts.empty()==false)
        {
            //cout<<"L48";
            return false;
        }

        //cout<<"L53";
       return true; 
    }
};