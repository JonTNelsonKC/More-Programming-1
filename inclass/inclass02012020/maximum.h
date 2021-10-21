//
//  maximum.h
//  
//
//  Created by Jonathan Nelson on 3/8/21.
//

#ifndef maximum_h
#define maximum_h


#endif /* maximum_h */

template <typename T>
T maximum(T value1, T value2, T value3){
    T maximumValue{value1};
    
    if (value2 > maximumValue){
        maximumValue = value2;
    }
    
    if (value3 > maximumValue){
        maximumValue = value3;
    }
    
    return maximumValue;
    }
