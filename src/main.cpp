#include <iostream>
#include <any>
#include <antlr4-runtime.h>
#include "TLLexer.h"
#include "TLParser.h"

using namespace antlr4;

int main(int argc, const char* argv[]) {
    std::ifstream stream;
    if(argc < 2)
	    std::cerr << "Usage: tl_compiler script.tl" << std::endl;
    stream.open(argv[1]);
    ANTLRInputStream input(stream);

    TLLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    TLParser parser(&tokens);

    try {
        auto program = parser.program();
        std::cout << "Parse successful!\n";
        // Print the parse tree (for debugging)
        std::cout << program->toStringTree(&parser) << "\n";
    } catch (const ParseCancellationException& e) {
        std::cerr << "Parse error: " << e.what() << "\n";
    }

    return 0;
}
