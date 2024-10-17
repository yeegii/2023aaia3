class Solution {
public:
    int calPoints(vector<string>& opr) {
        vector<int>ans;
       for(int i=0;i<opr.size();i++)
       {
            if(opr[i]=="C")
            {
                ans.pop_back();
            }
            else if(opr[i]=="D")
            {
                ans.push_back(2*ans[ans.size()-1]);
            }
            else if(opr[i]=="+")
            {
                ans.push_back(ans[ans.size()-1] + ans[ans.size()-2]);//ans.size()-1+ans.size()-2
            }
            else
            {
                ans.push_back(stoi(opr[i]));
            }
       }
      return  accumulate(ans.begin(),ans.end(),0);

    }
};