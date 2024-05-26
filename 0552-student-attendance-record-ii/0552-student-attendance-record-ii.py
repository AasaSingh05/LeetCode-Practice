class Solution:
    def checkRecord(self, n: int) -> int:
        mod = 1000000007

        def calcu(n,r):
            calc = 1
            for i in range(n,n-r+1,-1):
                calc *= i
            return calc

        def absentcons(n,i):
            if (n < i):
                return 0
            else:
                for r in range(2, n+1):
                    fact = 0
                    if(n == r):
                        fact += 1
                        return fact
                    else:
                        fact += calcu(n,r)

        def latecons(n,i):
            if (n < i):
                return 0
            else:
                for r in range(3, n+1):
                    fact = 0
                    if(n == r):
                        fact += 1
                        return fact
                    else:
                        fact += calcu(n,r)
        
        total = pow(3,n)
        absent = absentcons(n,2)
        late = latecons(n,3)

        finval = total - absent - late
        return finval % mod
        