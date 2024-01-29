bool isPalindrome(long long int x) {
    long long int no = x;
    long long int palino = 0;
    if (x < 0) {
        return false;
    } else {
        while (no != 0) {
            palino = palino * 10 + no % 10;
            no /= 10;
        }

        if (palino == x) {
            return true;
        } else {
            return false;
        }
    }
}