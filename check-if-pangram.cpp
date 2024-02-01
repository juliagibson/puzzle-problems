 bool checkIfPangram(string sentence) {
        
        std::unordered_map<char, int> frequency_map;
        
        // initialize frequency map
        frequency_map.insert({'a', 0}); 
        frequency_map.insert({'b', 0}); 
        frequency_map.insert({'c', 0}); 
        frequency_map.insert({'d', 0}); 
        frequency_map.insert({'e', 0}); 
        frequency_map.insert({'f', 0}); 
        frequency_map.insert({'g', 0}); 
        frequency_map.insert({'h', 0}); 
        frequency_map.insert({'i', 0}); 
        frequency_map.insert({'j', 0}); 
        frequency_map.insert({'k', 0}); 
        frequency_map.insert({'l', 0}); 
        frequency_map.insert({'m', 0}); 
        frequency_map.insert({'n', 0}); 
        frequency_map.insert({'o', 0}); 
        frequency_map.insert({'p', 0}); 
        frequency_map.insert({'q', 0}); 
        frequency_map.insert({'r', 0}); 
        frequency_map.insert({'s', 0}); 
        frequency_map.insert({'t', 0}); 
        frequency_map.insert({'u', 0}); 
        frequency_map.insert({'v', 0}); 
        frequency_map.insert({'w', 0}); 
        frequency_map.insert({'x', 0}); 
        frequency_map.insert({'y', 0}); 
        frequency_map.insert({'z', 0}); 

        // traverse sentence and adjust frequency values against characters in sentence
        for (int j = 0; j < sentence.size(); j++)
        {
            frequency_map[sentence[j]]++;
        }

        // test each letter appears in sentence at least once 
        for (auto& pair : frequency_map)
        {
            if (pair.second < 1)
            {
                return false;
            }
        }
        return true;

    }                 
