long long minimum = *min_element(nums.begin(), nums.end());
        long long moves = 0;

        for (int num : nums) {
            moves += (long long)num - minimum;
        }

        return (int)moves;
