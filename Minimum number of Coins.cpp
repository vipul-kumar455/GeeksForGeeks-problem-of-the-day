 vector<int> minPartition(int N)
    {
        // code here
          int currency[10]={1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};

        // we have indian rupees means we have number 1 that is after deducting highest number we can reduce the number by 1 at last which support our greedy  approch

        vector<int>ans;

        for(int i=9;i>=0;i--){

            while(N>=currency[i]){

                ans.push_back(currency[i]);

                N=N-currency[i];

            }

        }

        return ans;
    }
