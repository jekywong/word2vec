// automatically generated by the FlatBuffers compiler, do not modify

#ifndef FLATBUFFERS_GENERATED_MODEL_CCSEG_H_
#define FLATBUFFERS_GENERATED_MODEL_CCSEG_H_

#include "flatbuffers/flatbuffers.h"

namespace ccseg {

struct Word;
struct Dict;

struct Word : private flatbuffers::Table {
  const flatbuffers::String *name() const { return GetPointer<const flatbuffers::String *>(4); }
  const flatbuffers::Vector<float> *feature() const { return GetPointer<const flatbuffers::Vector<float> *>(6); }
  bool Verify(const flatbuffers::Verifier &verifier) const {
    return VerifyTable(verifier) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 4 /* name */) &&
           verifier.Verify(name()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 6 /* feature */) &&
           verifier.Verify(feature());
  }
};

struct WordBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_name(flatbuffers::Offset<flatbuffers::String> name) { fbb_.AddOffset(4, name); }
  void add_feature(flatbuffers::Offset<flatbuffers::Vector<float>> feature) { fbb_.AddOffset(6, feature); }
  WordBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  WordBuilder &operator=(const WordBuilder &);
  flatbuffers::Offset<Word> Finish() { return flatbuffers::Offset<Word>(fbb_.EndTable(start_, 2)); }
};

inline flatbuffers::Offset<Word> CreateWord(flatbuffers::FlatBufferBuilder &_fbb,
   flatbuffers::Offset<flatbuffers::String> name = 0,
   flatbuffers::Offset<flatbuffers::Vector<float>> feature = 0) {
  WordBuilder builder_(_fbb);
  builder_.add_feature(feature);
  builder_.add_name(name);
  return builder_.Finish();
}

struct Dict : private flatbuffers::Table {
  const flatbuffers::Vector<flatbuffers::Offset<Word>> *words() const { return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<Word>> *>(4); }
  bool Verify(const flatbuffers::Verifier &verifier) const {
    return VerifyTable(verifier) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 4 /* words */) &&
           verifier.Verify(words()) &&
           verifier.VerifyVectorOfTables(words());
  }
};

struct DictBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_words(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Word>>> words) { fbb_.AddOffset(4, words); }
  DictBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  DictBuilder &operator=(const DictBuilder &);
  flatbuffers::Offset<Dict> Finish() { return flatbuffers::Offset<Dict>(fbb_.EndTable(start_, 1)); }
};

inline flatbuffers::Offset<Dict> CreateDict(flatbuffers::FlatBufferBuilder &_fbb,
   flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Word>>> words = 0) {
  DictBuilder builder_(_fbb);
  builder_.add_words(words);
  return builder_.Finish();
}

inline const Dict *GetDict(const void *buf) { return flatbuffers::GetRoot<Dict>(buf); }

inline bool VerifyDictBuffer(const flatbuffers::Verifier &verifier) { return verifier.VerifyBuffer<Dict>(); }

};  // namespace ccseg

#endif  // FLATBUFFERS_GENERATED_MODEL_CCSEG_H_
