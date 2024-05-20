class Solution:
    def reverse(self, x: int) -> int:
        def RevBounds(y:int) -> int:
            if((y) > (2**31)-1 or (y) < -2**31):
                return 0
            else:
                return y
   
        res = ""
        revnum = 0
        stringnum = str(x)
        if(x < 0):
            res = "-"
            for i in stringnum[::-1]:
                if i == "-":
                    pass
                else:
                    res += i
            revnum = int(res)
            return RevBounds(revnum)
        else:
            for i in stringnum[::-1]:
                res += i
            revnum = int(res)
            return RevBounds(revnum)
                  