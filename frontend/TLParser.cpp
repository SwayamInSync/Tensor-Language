
// Generated from TL.g4 by ANTLR 4.13.2


#include "TLListener.h"
#include "TLVisitor.h"

#include "TLParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct TLParserStaticData final {
  TLParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  TLParserStaticData(const TLParserStaticData&) = delete;
  TLParserStaticData(TLParserStaticData&&) = delete;
  TLParserStaticData& operator=(const TLParserStaticData&) = delete;
  TLParserStaticData& operator=(TLParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag tlParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<TLParserStaticData> tlParserStaticData = nullptr;

void tlParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (tlParserStaticData != nullptr) {
    return;
  }
#else
  assert(tlParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<TLParserStaticData>(
    std::vector<std::string>{
      "program", "statement", "tensorDecl", "assignment", "tensorLiteral", 
      "scalarLiteral", "forLoop", "expression", "functionCall", "functionDecl"
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
  	4,1,23,164,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,1,0,1,0,5,0,23,8,0,10,0,12,0,26,9,0,1,0,1,0,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,40,8,1,1,2,1,2,1,2,1,2,1,2,1,
  	3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,5,4,55,8,4,10,4,12,4,58,9,4,1,4,1,4,1,4,
  	5,4,63,8,4,10,4,12,4,66,9,4,3,4,68,8,4,1,4,1,4,1,5,1,5,1,6,1,6,1,6,1,
  	6,1,6,1,6,5,6,80,8,6,10,6,12,6,83,9,6,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,7,
  	1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,
  	7,1,7,1,7,1,7,3,7,114,8,7,1,7,1,7,1,7,1,7,1,7,1,7,5,7,122,8,7,10,7,12,
  	7,125,9,7,1,8,1,8,1,8,1,8,1,8,5,8,132,8,8,10,8,12,8,135,9,8,3,8,137,8,
  	8,1,8,1,8,1,9,1,9,1,9,1,9,1,9,1,9,5,9,147,8,9,10,9,12,9,150,9,9,3,9,152,
  	8,9,1,9,1,9,1,9,5,9,157,8,9,10,9,12,9,160,9,9,1,9,1,9,1,9,0,1,14,10,0,
  	2,4,6,8,10,12,14,16,18,0,3,1,0,19,20,1,0,9,9,1,0,8,8,175,0,24,1,0,0,0,
  	2,39,1,0,0,0,4,41,1,0,0,0,6,46,1,0,0,0,8,50,1,0,0,0,10,71,1,0,0,0,12,
  	73,1,0,0,0,14,113,1,0,0,0,16,126,1,0,0,0,18,140,1,0,0,0,20,23,3,2,1,0,
  	21,23,3,18,9,0,22,20,1,0,0,0,22,21,1,0,0,0,23,26,1,0,0,0,24,22,1,0,0,
  	0,24,25,1,0,0,0,25,27,1,0,0,0,26,24,1,0,0,0,27,28,5,0,0,1,28,1,1,0,0,
  	0,29,30,3,4,2,0,30,31,5,18,0,0,31,40,1,0,0,0,32,33,3,6,3,0,33,34,5,18,
  	0,0,34,40,1,0,0,0,35,40,3,12,6,0,36,37,3,14,7,0,37,38,5,18,0,0,38,40,
  	1,0,0,0,39,29,1,0,0,0,39,32,1,0,0,0,39,35,1,0,0,0,39,36,1,0,0,0,40,3,
  	1,0,0,0,41,42,5,2,0,0,42,43,5,21,0,0,43,44,5,10,0,0,44,45,3,14,7,0,45,
  	5,1,0,0,0,46,47,5,21,0,0,47,48,5,10,0,0,48,49,3,14,7,0,49,7,1,0,0,0,50,
  	67,5,14,0,0,51,56,3,8,4,0,52,53,5,11,0,0,53,55,3,8,4,0,54,52,1,0,0,0,
  	55,58,1,0,0,0,56,54,1,0,0,0,56,57,1,0,0,0,57,68,1,0,0,0,58,56,1,0,0,0,
  	59,64,3,10,5,0,60,61,5,11,0,0,61,63,3,10,5,0,62,60,1,0,0,0,63,66,1,0,
  	0,0,64,62,1,0,0,0,64,65,1,0,0,0,65,68,1,0,0,0,66,64,1,0,0,0,67,51,1,0,
  	0,0,67,59,1,0,0,0,68,69,1,0,0,0,69,70,5,15,0,0,70,9,1,0,0,0,71,72,7,0,
  	0,0,72,11,1,0,0,0,73,74,5,3,0,0,74,75,5,21,0,0,75,76,5,4,0,0,76,77,5,
  	21,0,0,77,81,5,16,0,0,78,80,3,2,1,0,79,78,1,0,0,0,80,83,1,0,0,0,81,79,
  	1,0,0,0,81,82,1,0,0,0,82,84,1,0,0,0,83,81,1,0,0,0,84,85,5,17,0,0,85,13,
  	1,0,0,0,86,87,6,7,-1,0,87,88,5,12,0,0,88,89,3,14,7,0,89,90,5,13,0,0,90,
  	114,1,0,0,0,91,92,5,7,0,0,92,93,5,12,0,0,93,94,3,14,7,0,94,95,5,11,0,
  	0,95,96,3,14,7,0,96,97,5,13,0,0,97,114,1,0,0,0,98,99,5,5,0,0,99,100,5,
  	12,0,0,100,101,3,14,7,0,101,102,5,13,0,0,102,114,1,0,0,0,103,104,5,6,
  	0,0,104,105,5,12,0,0,105,106,3,14,7,0,106,107,5,11,0,0,107,108,5,21,0,
  	0,108,109,5,13,0,0,109,114,1,0,0,0,110,114,5,21,0,0,111,114,3,8,4,0,112,
  	114,3,16,8,0,113,86,1,0,0,0,113,91,1,0,0,0,113,98,1,0,0,0,113,103,1,0,
  	0,0,113,110,1,0,0,0,113,111,1,0,0,0,113,112,1,0,0,0,114,123,1,0,0,0,115,
  	116,10,5,0,0,116,117,7,1,0,0,117,122,3,14,7,6,118,119,10,4,0,0,119,120,
  	7,2,0,0,120,122,3,14,7,5,121,115,1,0,0,0,121,118,1,0,0,0,122,125,1,0,
  	0,0,123,121,1,0,0,0,123,124,1,0,0,0,124,15,1,0,0,0,125,123,1,0,0,0,126,
  	127,5,21,0,0,127,136,5,12,0,0,128,133,3,14,7,0,129,130,5,11,0,0,130,132,
  	3,14,7,0,131,129,1,0,0,0,132,135,1,0,0,0,133,131,1,0,0,0,133,134,1,0,
  	0,0,134,137,1,0,0,0,135,133,1,0,0,0,136,128,1,0,0,0,136,137,1,0,0,0,137,
  	138,1,0,0,0,138,139,5,13,0,0,139,17,1,0,0,0,140,141,5,1,0,0,141,142,5,
  	21,0,0,142,151,5,12,0,0,143,148,5,21,0,0,144,145,5,11,0,0,145,147,5,21,
  	0,0,146,144,1,0,0,0,147,150,1,0,0,0,148,146,1,0,0,0,148,149,1,0,0,0,149,
  	152,1,0,0,0,150,148,1,0,0,0,151,143,1,0,0,0,151,152,1,0,0,0,152,153,1,
  	0,0,0,153,154,5,13,0,0,154,158,5,16,0,0,155,157,3,2,1,0,156,155,1,0,0,
  	0,157,160,1,0,0,0,158,156,1,0,0,0,158,159,1,0,0,0,159,161,1,0,0,0,160,
  	158,1,0,0,0,161,162,5,17,0,0,162,19,1,0,0,0,15,22,24,39,56,64,67,81,113,
  	121,123,133,136,148,151,158
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  tlParserStaticData = std::move(staticData);
}

}

TLParser::TLParser(TokenStream *input) : TLParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

TLParser::TLParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  TLParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *tlParserStaticData->atn, tlParserStaticData->decisionToDFA, tlParserStaticData->sharedContextCache, options);
}

TLParser::~TLParser() {
  delete _interpreter;
}

const atn::ATN& TLParser::getATN() const {
  return *tlParserStaticData->atn;
}

std::string TLParser::getGrammarFileName() const {
  return "TL.g4";
}

const std::vector<std::string>& TLParser::getRuleNames() const {
  return tlParserStaticData->ruleNames;
}

const dfa::Vocabulary& TLParser::getVocabulary() const {
  return tlParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView TLParser::getSerializedATN() const {
  return tlParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

TLParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TLParser::ProgramContext::EOF() {
  return getToken(TLParser::EOF, 0);
}

std::vector<TLParser::StatementContext *> TLParser::ProgramContext::statement() {
  return getRuleContexts<TLParser::StatementContext>();
}

TLParser::StatementContext* TLParser::ProgramContext::statement(size_t i) {
  return getRuleContext<TLParser::StatementContext>(i);
}

std::vector<TLParser::FunctionDeclContext *> TLParser::ProgramContext::functionDecl() {
  return getRuleContexts<TLParser::FunctionDeclContext>();
}

TLParser::FunctionDeclContext* TLParser::ProgramContext::functionDecl(size_t i) {
  return getRuleContext<TLParser::FunctionDeclContext>(i);
}


size_t TLParser::ProgramContext::getRuleIndex() const {
  return TLParser::RuleProgram;
}

void TLParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void TLParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}


std::any TLParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TLVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

TLParser::ProgramContext* TLParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, TLParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(24);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2117870) != 0)) {
      setState(22);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case TLParser::TENSOR:
        case TLParser::FOR:
        case TLParser::SUM:
        case TLParser::GRAD:
        case TLParser::MATMUL:
        case TLParser::LPAREN:
        case TLParser::LBRACK:
        case TLParser::ID: {
          setState(20);
          statement();
          break;
        }

        case TLParser::T__0: {
          setState(21);
          functionDecl();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(26);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(27);
    match(TLParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

TLParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TLParser::TensorDeclContext* TLParser::StatementContext::tensorDecl() {
  return getRuleContext<TLParser::TensorDeclContext>(0);
}

tree::TerminalNode* TLParser::StatementContext::SEMI() {
  return getToken(TLParser::SEMI, 0);
}

TLParser::AssignmentContext* TLParser::StatementContext::assignment() {
  return getRuleContext<TLParser::AssignmentContext>(0);
}

TLParser::ForLoopContext* TLParser::StatementContext::forLoop() {
  return getRuleContext<TLParser::ForLoopContext>(0);
}

TLParser::ExpressionContext* TLParser::StatementContext::expression() {
  return getRuleContext<TLParser::ExpressionContext>(0);
}


size_t TLParser::StatementContext::getRuleIndex() const {
  return TLParser::RuleStatement;
}

void TLParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void TLParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


std::any TLParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TLVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

TLParser::StatementContext* TLParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 2, TLParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(39);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(29);
      tensorDecl();
      setState(30);
      match(TLParser::SEMI);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(32);
      assignment();
      setState(33);
      match(TLParser::SEMI);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(35);
      forLoop();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(36);
      expression(0);
      setState(37);
      match(TLParser::SEMI);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TensorDeclContext ------------------------------------------------------------------

TLParser::TensorDeclContext::TensorDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TLParser::TensorDeclContext::TENSOR() {
  return getToken(TLParser::TENSOR, 0);
}

tree::TerminalNode* TLParser::TensorDeclContext::ID() {
  return getToken(TLParser::ID, 0);
}

tree::TerminalNode* TLParser::TensorDeclContext::EQ() {
  return getToken(TLParser::EQ, 0);
}

TLParser::ExpressionContext* TLParser::TensorDeclContext::expression() {
  return getRuleContext<TLParser::ExpressionContext>(0);
}


size_t TLParser::TensorDeclContext::getRuleIndex() const {
  return TLParser::RuleTensorDecl;
}

void TLParser::TensorDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTensorDecl(this);
}

void TLParser::TensorDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTensorDecl(this);
}


std::any TLParser::TensorDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TLVisitor*>(visitor))
    return parserVisitor->visitTensorDecl(this);
  else
    return visitor->visitChildren(this);
}

TLParser::TensorDeclContext* TLParser::tensorDecl() {
  TensorDeclContext *_localctx = _tracker.createInstance<TensorDeclContext>(_ctx, getState());
  enterRule(_localctx, 4, TLParser::RuleTensorDecl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(41);
    match(TLParser::TENSOR);
    setState(42);
    match(TLParser::ID);
    setState(43);
    match(TLParser::EQ);
    setState(44);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

TLParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TLParser::AssignmentContext::ID() {
  return getToken(TLParser::ID, 0);
}

tree::TerminalNode* TLParser::AssignmentContext::EQ() {
  return getToken(TLParser::EQ, 0);
}

TLParser::ExpressionContext* TLParser::AssignmentContext::expression() {
  return getRuleContext<TLParser::ExpressionContext>(0);
}


size_t TLParser::AssignmentContext::getRuleIndex() const {
  return TLParser::RuleAssignment;
}

void TLParser::AssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment(this);
}

void TLParser::AssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment(this);
}


std::any TLParser::AssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TLVisitor*>(visitor))
    return parserVisitor->visitAssignment(this);
  else
    return visitor->visitChildren(this);
}

TLParser::AssignmentContext* TLParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 6, TLParser::RuleAssignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(46);
    match(TLParser::ID);
    setState(47);
    match(TLParser::EQ);
    setState(48);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TensorLiteralContext ------------------------------------------------------------------

TLParser::TensorLiteralContext::TensorLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TLParser::TensorLiteralContext::LBRACK() {
  return getToken(TLParser::LBRACK, 0);
}

tree::TerminalNode* TLParser::TensorLiteralContext::RBRACK() {
  return getToken(TLParser::RBRACK, 0);
}

std::vector<TLParser::TensorLiteralContext *> TLParser::TensorLiteralContext::tensorLiteral() {
  return getRuleContexts<TLParser::TensorLiteralContext>();
}

TLParser::TensorLiteralContext* TLParser::TensorLiteralContext::tensorLiteral(size_t i) {
  return getRuleContext<TLParser::TensorLiteralContext>(i);
}

std::vector<TLParser::ScalarLiteralContext *> TLParser::TensorLiteralContext::scalarLiteral() {
  return getRuleContexts<TLParser::ScalarLiteralContext>();
}

TLParser::ScalarLiteralContext* TLParser::TensorLiteralContext::scalarLiteral(size_t i) {
  return getRuleContext<TLParser::ScalarLiteralContext>(i);
}

std::vector<tree::TerminalNode *> TLParser::TensorLiteralContext::COMMA() {
  return getTokens(TLParser::COMMA);
}

tree::TerminalNode* TLParser::TensorLiteralContext::COMMA(size_t i) {
  return getToken(TLParser::COMMA, i);
}


size_t TLParser::TensorLiteralContext::getRuleIndex() const {
  return TLParser::RuleTensorLiteral;
}

void TLParser::TensorLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTensorLiteral(this);
}

void TLParser::TensorLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTensorLiteral(this);
}


std::any TLParser::TensorLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TLVisitor*>(visitor))
    return parserVisitor->visitTensorLiteral(this);
  else
    return visitor->visitChildren(this);
}

TLParser::TensorLiteralContext* TLParser::tensorLiteral() {
  TensorLiteralContext *_localctx = _tracker.createInstance<TensorLiteralContext>(_ctx, getState());
  enterRule(_localctx, 8, TLParser::RuleTensorLiteral);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(50);
    match(TLParser::LBRACK);
    setState(67);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TLParser::LBRACK: {
        setState(51);
        tensorLiteral();
        setState(56);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TLParser::COMMA) {
          setState(52);
          match(TLParser::COMMA);
          setState(53);
          tensorLiteral();
          setState(58);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case TLParser::INTEGER:
      case TLParser::FLOAT: {
        setState(59);
        scalarLiteral();
        setState(64);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TLParser::COMMA) {
          setState(60);
          match(TLParser::COMMA);
          setState(61);
          scalarLiteral();
          setState(66);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(69);
    match(TLParser::RBRACK);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ScalarLiteralContext ------------------------------------------------------------------

TLParser::ScalarLiteralContext::ScalarLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TLParser::ScalarLiteralContext::INTEGER() {
  return getToken(TLParser::INTEGER, 0);
}

tree::TerminalNode* TLParser::ScalarLiteralContext::FLOAT() {
  return getToken(TLParser::FLOAT, 0);
}


size_t TLParser::ScalarLiteralContext::getRuleIndex() const {
  return TLParser::RuleScalarLiteral;
}

void TLParser::ScalarLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterScalarLiteral(this);
}

void TLParser::ScalarLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitScalarLiteral(this);
}


std::any TLParser::ScalarLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TLVisitor*>(visitor))
    return parserVisitor->visitScalarLiteral(this);
  else
    return visitor->visitChildren(this);
}

TLParser::ScalarLiteralContext* TLParser::scalarLiteral() {
  ScalarLiteralContext *_localctx = _tracker.createInstance<ScalarLiteralContext>(_ctx, getState());
  enterRule(_localctx, 10, TLParser::RuleScalarLiteral);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(71);
    _la = _input->LA(1);
    if (!(_la == TLParser::INTEGER

    || _la == TLParser::FLOAT)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForLoopContext ------------------------------------------------------------------

TLParser::ForLoopContext::ForLoopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TLParser::ForLoopContext::FOR() {
  return getToken(TLParser::FOR, 0);
}

std::vector<tree::TerminalNode *> TLParser::ForLoopContext::ID() {
  return getTokens(TLParser::ID);
}

tree::TerminalNode* TLParser::ForLoopContext::ID(size_t i) {
  return getToken(TLParser::ID, i);
}

tree::TerminalNode* TLParser::ForLoopContext::IN() {
  return getToken(TLParser::IN, 0);
}

tree::TerminalNode* TLParser::ForLoopContext::LBRACE() {
  return getToken(TLParser::LBRACE, 0);
}

tree::TerminalNode* TLParser::ForLoopContext::RBRACE() {
  return getToken(TLParser::RBRACE, 0);
}

std::vector<TLParser::StatementContext *> TLParser::ForLoopContext::statement() {
  return getRuleContexts<TLParser::StatementContext>();
}

TLParser::StatementContext* TLParser::ForLoopContext::statement(size_t i) {
  return getRuleContext<TLParser::StatementContext>(i);
}


size_t TLParser::ForLoopContext::getRuleIndex() const {
  return TLParser::RuleForLoop;
}

void TLParser::ForLoopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForLoop(this);
}

void TLParser::ForLoopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForLoop(this);
}


std::any TLParser::ForLoopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TLVisitor*>(visitor))
    return parserVisitor->visitForLoop(this);
  else
    return visitor->visitChildren(this);
}

TLParser::ForLoopContext* TLParser::forLoop() {
  ForLoopContext *_localctx = _tracker.createInstance<ForLoopContext>(_ctx, getState());
  enterRule(_localctx, 12, TLParser::RuleForLoop);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(73);
    match(TLParser::FOR);
    setState(74);
    match(TLParser::ID);
    setState(75);
    match(TLParser::IN);
    setState(76);
    match(TLParser::ID);
    setState(77);
    match(TLParser::LBRACE);
    setState(81);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2117868) != 0)) {
      setState(78);
      statement();
      setState(83);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(84);
    match(TLParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

TLParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t TLParser::ExpressionContext::getRuleIndex() const {
  return TLParser::RuleExpression;
}

void TLParser::ExpressionContext::copyFrom(ExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- AddOpContext ------------------------------------------------------------------

std::vector<TLParser::ExpressionContext *> TLParser::AddOpContext::expression() {
  return getRuleContexts<TLParser::ExpressionContext>();
}

TLParser::ExpressionContext* TLParser::AddOpContext::expression(size_t i) {
  return getRuleContext<TLParser::ExpressionContext>(i);
}

tree::TerminalNode* TLParser::AddOpContext::PLUS() {
  return getToken(TLParser::PLUS, 0);
}

TLParser::AddOpContext::AddOpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TLParser::AddOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddOp(this);
}
void TLParser::AddOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddOp(this);
}

std::any TLParser::AddOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TLVisitor*>(visitor))
    return parserVisitor->visitAddOp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FuncCallContext ------------------------------------------------------------------

TLParser::FunctionCallContext* TLParser::FuncCallContext::functionCall() {
  return getRuleContext<TLParser::FunctionCallContext>(0);
}

TLParser::FuncCallContext::FuncCallContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TLParser::FuncCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncCall(this);
}
void TLParser::FuncCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncCall(this);
}

std::any TLParser::FuncCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TLVisitor*>(visitor))
    return parserVisitor->visitFuncCall(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IdentifierContext ------------------------------------------------------------------

tree::TerminalNode* TLParser::IdentifierContext::ID() {
  return getToken(TLParser::ID, 0);
}

TLParser::IdentifierContext::IdentifierContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TLParser::IdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifier(this);
}
void TLParser::IdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifier(this);
}

std::any TLParser::IdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TLVisitor*>(visitor))
    return parserVisitor->visitIdentifier(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MatmulContext ------------------------------------------------------------------

tree::TerminalNode* TLParser::MatmulContext::MATMUL() {
  return getToken(TLParser::MATMUL, 0);
}

tree::TerminalNode* TLParser::MatmulContext::LPAREN() {
  return getToken(TLParser::LPAREN, 0);
}

std::vector<TLParser::ExpressionContext *> TLParser::MatmulContext::expression() {
  return getRuleContexts<TLParser::ExpressionContext>();
}

TLParser::ExpressionContext* TLParser::MatmulContext::expression(size_t i) {
  return getRuleContext<TLParser::ExpressionContext>(i);
}

tree::TerminalNode* TLParser::MatmulContext::COMMA() {
  return getToken(TLParser::COMMA, 0);
}

tree::TerminalNode* TLParser::MatmulContext::RPAREN() {
  return getToken(TLParser::RPAREN, 0);
}

TLParser::MatmulContext::MatmulContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TLParser::MatmulContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMatmul(this);
}
void TLParser::MatmulContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMatmul(this);
}

std::any TLParser::MatmulContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TLVisitor*>(visitor))
    return parserVisitor->visitMatmul(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MulOpContext ------------------------------------------------------------------

std::vector<TLParser::ExpressionContext *> TLParser::MulOpContext::expression() {
  return getRuleContexts<TLParser::ExpressionContext>();
}

TLParser::ExpressionContext* TLParser::MulOpContext::expression(size_t i) {
  return getRuleContext<TLParser::ExpressionContext>(i);
}

tree::TerminalNode* TLParser::MulOpContext::MUL() {
  return getToken(TLParser::MUL, 0);
}

TLParser::MulOpContext::MulOpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TLParser::MulOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMulOp(this);
}
void TLParser::MulOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMulOp(this);
}

std::any TLParser::MulOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TLVisitor*>(visitor))
    return parserVisitor->visitMulOp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LiteralContext ------------------------------------------------------------------

TLParser::TensorLiteralContext* TLParser::LiteralContext::tensorLiteral() {
  return getRuleContext<TLParser::TensorLiteralContext>(0);
}

TLParser::LiteralContext::LiteralContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TLParser::LiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteral(this);
}
void TLParser::LiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteral(this);
}

std::any TLParser::LiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TLVisitor*>(visitor))
    return parserVisitor->visitLiteral(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SumContext ------------------------------------------------------------------

tree::TerminalNode* TLParser::SumContext::SUM() {
  return getToken(TLParser::SUM, 0);
}

tree::TerminalNode* TLParser::SumContext::LPAREN() {
  return getToken(TLParser::LPAREN, 0);
}

TLParser::ExpressionContext* TLParser::SumContext::expression() {
  return getRuleContext<TLParser::ExpressionContext>(0);
}

tree::TerminalNode* TLParser::SumContext::RPAREN() {
  return getToken(TLParser::RPAREN, 0);
}

TLParser::SumContext::SumContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TLParser::SumContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSum(this);
}
void TLParser::SumContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSum(this);
}

std::any TLParser::SumContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TLVisitor*>(visitor))
    return parserVisitor->visitSum(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenExprContext ------------------------------------------------------------------

tree::TerminalNode* TLParser::ParenExprContext::LPAREN() {
  return getToken(TLParser::LPAREN, 0);
}

TLParser::ExpressionContext* TLParser::ParenExprContext::expression() {
  return getRuleContext<TLParser::ExpressionContext>(0);
}

tree::TerminalNode* TLParser::ParenExprContext::RPAREN() {
  return getToken(TLParser::RPAREN, 0);
}

TLParser::ParenExprContext::ParenExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TLParser::ParenExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParenExpr(this);
}
void TLParser::ParenExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParenExpr(this);
}

std::any TLParser::ParenExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TLVisitor*>(visitor))
    return parserVisitor->visitParenExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- GradContext ------------------------------------------------------------------

tree::TerminalNode* TLParser::GradContext::GRAD() {
  return getToken(TLParser::GRAD, 0);
}

tree::TerminalNode* TLParser::GradContext::LPAREN() {
  return getToken(TLParser::LPAREN, 0);
}

TLParser::ExpressionContext* TLParser::GradContext::expression() {
  return getRuleContext<TLParser::ExpressionContext>(0);
}

tree::TerminalNode* TLParser::GradContext::COMMA() {
  return getToken(TLParser::COMMA, 0);
}

tree::TerminalNode* TLParser::GradContext::ID() {
  return getToken(TLParser::ID, 0);
}

tree::TerminalNode* TLParser::GradContext::RPAREN() {
  return getToken(TLParser::RPAREN, 0);
}

TLParser::GradContext::GradContext(ExpressionContext *ctx) { copyFrom(ctx); }

void TLParser::GradContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGrad(this);
}
void TLParser::GradContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGrad(this);
}

std::any TLParser::GradContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TLVisitor*>(visitor))
    return parserVisitor->visitGrad(this);
  else
    return visitor->visitChildren(this);
}

TLParser::ExpressionContext* TLParser::expression() {
   return expression(0);
}

TLParser::ExpressionContext* TLParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  TLParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  TLParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 14;
  enterRecursionRule(_localctx, 14, TLParser::RuleExpression, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(113);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ParenExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(87);
      match(TLParser::LPAREN);
      setState(88);
      expression(0);
      setState(89);
      match(TLParser::RPAREN);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<MatmulContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(91);
      match(TLParser::MATMUL);
      setState(92);
      match(TLParser::LPAREN);
      setState(93);
      expression(0);
      setState(94);
      match(TLParser::COMMA);
      setState(95);
      expression(0);
      setState(96);
      match(TLParser::RPAREN);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<SumContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(98);
      match(TLParser::SUM);
      setState(99);
      match(TLParser::LPAREN);
      setState(100);
      expression(0);
      setState(101);
      match(TLParser::RPAREN);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<GradContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(103);
      match(TLParser::GRAD);
      setState(104);
      match(TLParser::LPAREN);
      setState(105);
      expression(0);
      setState(106);
      match(TLParser::COMMA);
      setState(107);
      match(TLParser::ID);
      setState(108);
      match(TLParser::RPAREN);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<IdentifierContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(110);
      match(TLParser::ID);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<LiteralContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(111);
      tensorLiteral();
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<FuncCallContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(112);
      functionCall();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(123);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(121);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MulOpContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(115);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(116);
          _la = _input->LA(1);
          if (!(_la == TLParser::MUL)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(117);
          expression(6);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AddOpContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(118);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(119);
          _la = _input->LA(1);
          if (!(_la == TLParser::PLUS)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(120);
          expression(5);
          break;
        }

        default:
          break;
        } 
      }
      setState(125);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- FunctionCallContext ------------------------------------------------------------------

TLParser::FunctionCallContext::FunctionCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TLParser::FunctionCallContext::ID() {
  return getToken(TLParser::ID, 0);
}

tree::TerminalNode* TLParser::FunctionCallContext::LPAREN() {
  return getToken(TLParser::LPAREN, 0);
}

tree::TerminalNode* TLParser::FunctionCallContext::RPAREN() {
  return getToken(TLParser::RPAREN, 0);
}

std::vector<TLParser::ExpressionContext *> TLParser::FunctionCallContext::expression() {
  return getRuleContexts<TLParser::ExpressionContext>();
}

TLParser::ExpressionContext* TLParser::FunctionCallContext::expression(size_t i) {
  return getRuleContext<TLParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> TLParser::FunctionCallContext::COMMA() {
  return getTokens(TLParser::COMMA);
}

tree::TerminalNode* TLParser::FunctionCallContext::COMMA(size_t i) {
  return getToken(TLParser::COMMA, i);
}


size_t TLParser::FunctionCallContext::getRuleIndex() const {
  return TLParser::RuleFunctionCall;
}

void TLParser::FunctionCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionCall(this);
}

void TLParser::FunctionCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionCall(this);
}


std::any TLParser::FunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TLVisitor*>(visitor))
    return parserVisitor->visitFunctionCall(this);
  else
    return visitor->visitChildren(this);
}

TLParser::FunctionCallContext* TLParser::functionCall() {
  FunctionCallContext *_localctx = _tracker.createInstance<FunctionCallContext>(_ctx, getState());
  enterRule(_localctx, 16, TLParser::RuleFunctionCall);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(126);
    match(TLParser::ID);
    setState(127);
    match(TLParser::LPAREN);
    setState(136);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2117856) != 0)) {
      setState(128);
      expression(0);
      setState(133);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == TLParser::COMMA) {
        setState(129);
        match(TLParser::COMMA);
        setState(130);
        expression(0);
        setState(135);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(138);
    match(TLParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDeclContext ------------------------------------------------------------------

TLParser::FunctionDeclContext::FunctionDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> TLParser::FunctionDeclContext::ID() {
  return getTokens(TLParser::ID);
}

tree::TerminalNode* TLParser::FunctionDeclContext::ID(size_t i) {
  return getToken(TLParser::ID, i);
}

tree::TerminalNode* TLParser::FunctionDeclContext::LPAREN() {
  return getToken(TLParser::LPAREN, 0);
}

tree::TerminalNode* TLParser::FunctionDeclContext::RPAREN() {
  return getToken(TLParser::RPAREN, 0);
}

tree::TerminalNode* TLParser::FunctionDeclContext::LBRACE() {
  return getToken(TLParser::LBRACE, 0);
}

tree::TerminalNode* TLParser::FunctionDeclContext::RBRACE() {
  return getToken(TLParser::RBRACE, 0);
}

std::vector<TLParser::StatementContext *> TLParser::FunctionDeclContext::statement() {
  return getRuleContexts<TLParser::StatementContext>();
}

TLParser::StatementContext* TLParser::FunctionDeclContext::statement(size_t i) {
  return getRuleContext<TLParser::StatementContext>(i);
}

std::vector<tree::TerminalNode *> TLParser::FunctionDeclContext::COMMA() {
  return getTokens(TLParser::COMMA);
}

tree::TerminalNode* TLParser::FunctionDeclContext::COMMA(size_t i) {
  return getToken(TLParser::COMMA, i);
}


size_t TLParser::FunctionDeclContext::getRuleIndex() const {
  return TLParser::RuleFunctionDecl;
}

void TLParser::FunctionDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDecl(this);
}

void TLParser::FunctionDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDecl(this);
}


std::any TLParser::FunctionDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TLVisitor*>(visitor))
    return parserVisitor->visitFunctionDecl(this);
  else
    return visitor->visitChildren(this);
}

TLParser::FunctionDeclContext* TLParser::functionDecl() {
  FunctionDeclContext *_localctx = _tracker.createInstance<FunctionDeclContext>(_ctx, getState());
  enterRule(_localctx, 18, TLParser::RuleFunctionDecl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(140);
    match(TLParser::T__0);
    setState(141);
    match(TLParser::ID);
    setState(142);
    match(TLParser::LPAREN);
    setState(151);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TLParser::ID) {
      setState(143);
      match(TLParser::ID);
      setState(148);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == TLParser::COMMA) {
        setState(144);
        match(TLParser::COMMA);
        setState(145);
        match(TLParser::ID);
        setState(150);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(153);
    match(TLParser::RPAREN);
    setState(154);
    match(TLParser::LBRACE);
    setState(158);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2117868) != 0)) {
      setState(155);
      statement();
      setState(160);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(161);
    match(TLParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool TLParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 7: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool TLParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 5);
    case 1: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

void TLParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  tlParserInitialize();
#else
  ::antlr4::internal::call_once(tlParserOnceFlag, tlParserInitialize);
#endif
}
