/**
 * Autogenerated by Thrift Compiler (0.13.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "match_types.h"

#include <algorithm>
#include <ostream>

#include <thrift/TToString.h>

namespace match_service {


user::~user() noexcept {
}


void user::__set_id(const int32_t val) {
  this->id = val;
}

void user::__set_name(const std::string& val) {
  this->name = val;
}

void user::__set_score(const int32_t val) {
  this->score = val;
}
std::ostream& operator<<(std::ostream& out, const user& obj)
{
  obj.printTo(out);
  return out;
}


uint32_t user::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->id);
          this->__isset.id = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->name);
          this->__isset.name = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->score);
          this->__isset.score = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t user::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("user");

  xfer += oprot->writeFieldBegin("id", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->id);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("name", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->name);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("score", ::apache::thrift::protocol::T_I32, 3);
  xfer += oprot->writeI32(this->score);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(user &a, user &b) {
  using ::std::swap;
  swap(a.id, b.id);
  swap(a.name, b.name);
  swap(a.score, b.score);
  swap(a.__isset, b.__isset);
}

user::user(const user& other0) {
  id = other0.id;
  name = other0.name;
  score = other0.score;
  __isset = other0.__isset;
}
user& user::operator=(const user& other1) {
  id = other1.id;
  name = other1.name;
  score = other1.score;
  __isset = other1.__isset;
  return *this;
}
void user::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "user(";
  out << "id=" << to_string(id);
  out << ", " << "name=" << to_string(name);
  out << ", " << "score=" << to_string(score);
  out << ")";
}

} // namespace
