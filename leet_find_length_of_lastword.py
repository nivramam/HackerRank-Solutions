def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """
        if len(s)==0 or s==" ":
            return 0
        else:
            listS=list(s.split(" "))
            # print(a)
            for i in range(len(listS)-1,-1,-1):
                if len(listS[i])!=0:
                    return len(listS[i])
            return 0
