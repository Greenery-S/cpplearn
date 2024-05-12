| Types                                                        | Category             | Meaning                                          | Example |
| :----------------------------------------------------------- | :------------------- | :----------------------------------------------- | :------ |
| float double long double                                     | Floating Point       | a number with a fractional part                  | 3.14159 |
| bool                                                         | Integral (Boolean)   | true or false                                    | true    |
| char wchar_t char8_t (C++20) char16_t (C++11) char32_t (C++11) | Integral (Character) | a single character of text                       | ‘c’     |
| short int int long int long long int (C++11)                 | Integral (Integer)   | positive and negative whole numbers, including 0 | 64      |
| std::nullptr_t (C++11)                                       | Null Pointer         | a null pointer                                   | nullptr |
| void                                                         | Void                 | no type                                          | n/a     |



| Name          | Type            | Range                                                   | Notes                                                        |
| :------------ | :-------------- | :------------------------------------------------------ | :----------------------------------------------------------- |
| std::int8_t   | 1 byte signed   | -128 to 127                                             | Treated like a signed char on many systems. See note below.  |
| std::uint8_t  | 1 byte unsigned | 0 to 255                                                | Treated like an unsigned char on many systems. See note below. |
| std::int16_t  | 2 byte signed   | -32,768 to 32,767                                       |                                                              |
| std::uint16_t | 2 byte unsigned | 0 to 65,535                                             |                                                              |
| std::int32_t  | 4 byte signed   | -2,147,483,648 to 2,147,483,647                         |                                                              |
| std::uint32_t | 4 byte unsigned | 0 to 4,294,967,295                                      |                                                              |
| std::int64_t  | 8 byte signed   | -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 |                                                              |
| std::uint64_t | 8 byte unsigned | 0 to 18,446,744,073,709,551,615                         |                                                              |



| Category       | Type        | Minimum Size | Typical Size       |
| :------------- | :---------- | :----------- | :----------------- |
| floating point | float       | 4 bytes      | 4 bytes            |
|                | double      | 8 bytes      | 8 bytes            |
|                | long double | 8 bytes      | 8, 12, or 16 bytes |


| Size                                    | Range                                     | Precision                              |
| :-------------------------------------- | :---------------------------------------- | :------------------------------------- |
| 4 bytes                                 | ±1.18 x 10-38 to ±3.4 x 1038 and 0.0      | 6-9 significant digits, typically 7    |
| 8 bytes                                 | ±2.23 x 10-308 to ±1.80 x 10308 and 0.0   | 15-18 significant digits, typically 16 |
| 80-bits (typically uses 12 or 16 bytes) | ±3.36 x 10-4932 to ±1.18 x 104932 and 0.0 | 18-21 significant digits               |
| 16 bytes                                | ±3.36 x 10-4932 to ±1.18 x 104932 and 0.0 | 33-36 significant digits               |
