#include "main.h"

//  begin
//     while (not last character) do
//       begin
//         readSymbol()
//         shorten context
//         while (context not found and context length not -1) do
//          begin
//            output(escape sequence)
//            shorten context
//          end
//         output(character)
//         while (context length not -1) do
//          begin
//            increase count of character (create node if nonexistant)
//            shorten context
//          end
//       end
//   end  