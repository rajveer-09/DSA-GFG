#User function Template for python3

class Solution:
    mat = [[0 for i in range(3)] for j in range(3)]
    res = [[0 for i in range(3)] for j in range(3)]
    
    def mul(self, res, mat, m):
        res1 = [[0 for i in range(3)] for j in range(3)]
        for i in range(3):
            for j in range(3):
                for k in range(3):
                    res1[i][j] += (res[i][k]*mat[k][j])
                    res1[i][j] %= m
        
        for i in range(3):
            for j in range(3):
                res[i][j] = res1[i][j]
    
    def mat_exp(self, n, m):
        while n>0:
            if n&1:
                self.mul(self.res, self.mat, m)
            self.mul(self.mat,self.mat,m)
            n //= 2
    
    def genFibNum(self, a, b, c, n, m):
        self.res = [[0 for i in range(3)] for j in range(3)]
        self.res[0][0] = self.res[1][1] = self.res[2][2] = 1
        self.mat[0][0] = a
        self.mat[0][1] = b
        self.mat[0][2] = self.mat[1][0] = self.mat[2][2] = 1
        self.mat[1][1] = self.mat[1][2] = self.mat[2][0] = self.mat[2][1] = 0
        
        if n<=2:
            return 1%m
        else:
            self.mat_exp(n-2,m)
            return (self.res[0][0] + self.res[0][1] + c*self.res[0][2])%m 


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        a,b,c,n,m=map(int,input().split())
        
        ob = Solution()
        print(ob.genFibNum(a,b,c,n,m))
# } Driver Code Ends