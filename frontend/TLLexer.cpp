
// Generated from TL.g4 by ANTLR 4.13.2


#include "TLLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct TLLexerStaticData final {
  TLLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  TLLexerStaticData(const TLLexerStaticData&) = delete;
  TLLexerStaticData(TLLexerStaticData&&) = delete;
  TLLexerStaticData& operator=(const TLLexerStaticData&) = delete;
  TLLexerStaticData& operator=(TLLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag tllexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<TLLexerStaticData> tllexerLexerStaticData = nullptr;

void tllexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (tllexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(tllexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<TLLexerStaticData>(
    std::vector<std::string>{
      "T__0", "TENSOR", "FOR", "IN", "SUM", "GRAD", "MATMUL", "PLUS", "MUL", 
      "EQ", "COMMA", "LPAREN", "RPAREN", "LBRACK", "RBRACK", "LBRACE", "RBRACE", 
      "SEMI", "INTEGER", "FLOAT", "ID", "COMMENT", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'func'", "'tensor'", "'for'", "'in'", "'sum'", "'grad'", "'matmul'", 
      "'+'", "'*'", "'='", "','", "'('", "')'", "'['", "']'", "'{'", "'}'", 
      "';'"
    },
    std::vector<std::string>{
      "", "", "TENSOR", "FOR", "IN", "SUM", "GRAD", "MATMUL", "PLUS", "MUL", 
      "EQ", "COMMA", "LPAREN", "RPAREN", "LBRACK", "RBRACK", "LBRACE", "RBRACE", 
      "SEMI", "INTEGER", "FLOAT", "ID", "COMMENT", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,23,156,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,1,0,1,0,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,
  	2,1,2,1,2,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,5,1,5,1,5,1,5,1,5,1,6,1,6,1,6,
  	1,6,1,6,1,6,1,6,1,7,1,7,1,8,1,8,1,9,1,9,1,10,1,10,1,11,1,11,1,12,1,12,
  	1,13,1,13,1,14,1,14,1,15,1,15,1,16,1,16,1,17,1,17,1,18,4,18,106,8,18,
  	11,18,12,18,107,1,19,4,19,111,8,19,11,19,12,19,112,1,19,1,19,5,19,117,
  	8,19,10,19,12,19,120,9,19,1,19,1,19,4,19,124,8,19,11,19,12,19,125,3,19,
  	128,8,19,1,20,1,20,5,20,132,8,20,10,20,12,20,135,9,20,1,21,1,21,1,21,
  	1,21,5,21,141,8,21,10,21,12,21,144,9,21,1,21,1,21,1,21,1,21,1,22,4,22,
  	151,8,22,11,22,12,22,152,1,22,1,22,1,142,0,23,1,1,3,2,5,3,7,4,9,5,11,
  	6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,
  	37,19,39,20,41,21,43,22,45,23,1,0,4,1,0,48,57,3,0,65,90,95,95,97,122,
  	4,0,48,57,65,90,95,95,97,122,3,0,9,10,13,13,32,32,163,0,1,1,0,0,0,0,3,
  	1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,
  	0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,
  	1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,
  	0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,
  	1,47,1,0,0,0,3,52,1,0,0,0,5,59,1,0,0,0,7,63,1,0,0,0,9,66,1,0,0,0,11,70,
  	1,0,0,0,13,75,1,0,0,0,15,82,1,0,0,0,17,84,1,0,0,0,19,86,1,0,0,0,21,88,
  	1,0,0,0,23,90,1,0,0,0,25,92,1,0,0,0,27,94,1,0,0,0,29,96,1,0,0,0,31,98,
  	1,0,0,0,33,100,1,0,0,0,35,102,1,0,0,0,37,105,1,0,0,0,39,127,1,0,0,0,41,
  	129,1,0,0,0,43,136,1,0,0,0,45,150,1,0,0,0,47,48,5,102,0,0,48,49,5,117,
  	0,0,49,50,5,110,0,0,50,51,5,99,0,0,51,2,1,0,0,0,52,53,5,116,0,0,53,54,
  	5,101,0,0,54,55,5,110,0,0,55,56,5,115,0,0,56,57,5,111,0,0,57,58,5,114,
  	0,0,58,4,1,0,0,0,59,60,5,102,0,0,60,61,5,111,0,0,61,62,5,114,0,0,62,6,
  	1,0,0,0,63,64,5,105,0,0,64,65,5,110,0,0,65,8,1,0,0,0,66,67,5,115,0,0,
  	67,68,5,117,0,0,68,69,5,109,0,0,69,10,1,0,0,0,70,71,5,103,0,0,71,72,5,
  	114,0,0,72,73,5,97,0,0,73,74,5,100,0,0,74,12,1,0,0,0,75,76,5,109,0,0,
  	76,77,5,97,0,0,77,78,5,116,0,0,78,79,5,109,0,0,79,80,5,117,0,0,80,81,
  	5,108,0,0,81,14,1,0,0,0,82,83,5,43,0,0,83,16,1,0,0,0,84,85,5,42,0,0,85,
  	18,1,0,0,0,86,87,5,61,0,0,87,20,1,0,0,0,88,89,5,44,0,0,89,22,1,0,0,0,
  	90,91,5,40,0,0,91,24,1,0,0,0,92,93,5,41,0,0,93,26,1,0,0,0,94,95,5,91,
  	0,0,95,28,1,0,0,0,96,97,5,93,0,0,97,30,1,0,0,0,98,99,5,123,0,0,99,32,
  	1,0,0,0,100,101,5,125,0,0,101,34,1,0,0,0,102,103,5,59,0,0,103,36,1,0,
  	0,0,104,106,7,0,0,0,105,104,1,0,0,0,106,107,1,0,0,0,107,105,1,0,0,0,107,
  	108,1,0,0,0,108,38,1,0,0,0,109,111,7,0,0,0,110,109,1,0,0,0,111,112,1,
  	0,0,0,112,110,1,0,0,0,112,113,1,0,0,0,113,114,1,0,0,0,114,118,5,46,0,
  	0,115,117,7,0,0,0,116,115,1,0,0,0,117,120,1,0,0,0,118,116,1,0,0,0,118,
  	119,1,0,0,0,119,128,1,0,0,0,120,118,1,0,0,0,121,123,5,46,0,0,122,124,
  	7,0,0,0,123,122,1,0,0,0,124,125,1,0,0,0,125,123,1,0,0,0,125,126,1,0,0,
  	0,126,128,1,0,0,0,127,110,1,0,0,0,127,121,1,0,0,0,128,40,1,0,0,0,129,
  	133,7,1,0,0,130,132,7,2,0,0,131,130,1,0,0,0,132,135,1,0,0,0,133,131,1,
  	0,0,0,133,134,1,0,0,0,134,42,1,0,0,0,135,133,1,0,0,0,136,137,5,47,0,0,
  	137,138,5,47,0,0,138,142,1,0,0,0,139,141,9,0,0,0,140,139,1,0,0,0,141,
  	144,1,0,0,0,142,143,1,0,0,0,142,140,1,0,0,0,143,145,1,0,0,0,144,142,1,
  	0,0,0,145,146,5,10,0,0,146,147,1,0,0,0,147,148,6,21,0,0,148,44,1,0,0,
  	0,149,151,7,3,0,0,150,149,1,0,0,0,151,152,1,0,0,0,152,150,1,0,0,0,152,
  	153,1,0,0,0,153,154,1,0,0,0,154,155,6,22,0,0,155,46,1,0,0,0,9,0,107,112,
  	118,125,127,133,142,152,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  tllexerLexerStaticData = std::move(staticData);
}

}

TLLexer::TLLexer(CharStream *input) : Lexer(input) {
  TLLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *tllexerLexerStaticData->atn, tllexerLexerStaticData->decisionToDFA, tllexerLexerStaticData->sharedContextCache);
}

TLLexer::~TLLexer() {
  delete _interpreter;
}

std::string TLLexer::getGrammarFileName() const {
  return "TL.g4";
}

const std::vector<std::string>& TLLexer::getRuleNames() const {
  return tllexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& TLLexer::getChannelNames() const {
  return tllexerLexerStaticData->channelNames;
}

const std::vector<std::string>& TLLexer::getModeNames() const {
  return tllexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& TLLexer::getVocabulary() const {
  return tllexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView TLLexer::getSerializedATN() const {
  return tllexerLexerStaticData->serializedATN;
}

const atn::ATN& TLLexer::getATN() const {
  return *tllexerLexerStaticData->atn;
}




void TLLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  tllexerLexerInitialize();
#else
  ::antlr4::internal::call_once(tllexerLexerOnceFlag, tllexerLexerInitialize);
#endif
}
