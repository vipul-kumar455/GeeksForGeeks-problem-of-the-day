class Solution {
  public:
    int count(int N)

    {

        int ct=0;

        for (int i = 0; i < sizeof(int) * 8; i++) {

        if (N & (1 << i))

            ct++;

    }

    return ct;

    }

    int minVal(int a, int b) {

        if(count(a)>=count(b))

        {

            int x=a;

            int diff=count(a)-count(b);

            for(int i=0;i<diff;i++)

            x=x&(x-1);

            return x;

        }

 else

        {

            int x=a;

            int diff=count(b)-count(a);

            for(int i=0;i<diff;i++)

            x=x|(x+1);

            return x;

      }

    }
};
