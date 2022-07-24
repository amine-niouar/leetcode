class Solution(object):
    def strongPasswordCheckerII(self, password):
        """
        :type password: str
        :rtype: bool
        """
        lenp = len(password)
        adajacent = 0
        i = 0
        lower = 0
        specialstr = "!@#$%^&*()-+"
        special = 0
        upper = 0
        digit = 0
        for x in password:
            if i < lenp - 1 and x == password[i + 1] and adajacent == 0:
                adajacent = 1
            if x.islower() and lower == 0:
                lower = 1
            if x.isupper() and upper == 0:
                upper = 1
            if x.isdigit() and digit == 0:
                digit = 1
            if special == 0:
                if x in specialstr:
                    special = 1
            i += 1
        if i >= 8 and lower and special and upper and digit and adajacent == 0:
            return (True)
        return (False)