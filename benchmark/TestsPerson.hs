{-# LANGUAGE BangPatterns, DeriveDataTypeable, FlexibleInstances, MultiParamTypeClasses #-}
module TestsPerson (protoInfo, fileDescriptorProto) where
import Prelude ((+), (/))
import qualified Prelude as Prelude'
import qualified Data.Typeable as Prelude'
import qualified Data.Data as Prelude'
import qualified Text.ProtocolBuffers.Header as P'
import Text.DescriptorProtos.FileDescriptorProto (FileDescriptorProto)
import Text.ProtocolBuffers.Reflections (ProtoInfo)
import qualified Text.ProtocolBuffers.WireMessage as P' (wireGet,getFromBS)
 
protoInfo :: ProtoInfo
protoInfo
 = Prelude'.read
    "ProtoInfo {protoMod = ProtoName {protobufName = FIName \".TestsPerson\", haskellPrefix = [], parentModule = [], baseName = MName \"TestsPerson\"}, protoFilePath = [\"TestsPerson.hs\"], protoSource = \"tests/person.proto\", extensionKeys = fromList [], messages = [DescriptorInfo {descName = ProtoName {protobufName = FIName \".TestsPerson.Name\", haskellPrefix = [], parentModule = [MName \"TestsPerson\"], baseName = MName \"Name\"}, descFilePath = [\"TestsPerson\",\"Name.hs\"], isGroup = False, fields = fromList [FieldInfo {fieldName = ProtoFName {protobufName' = FIName \".TestsPerson.Name.firstname\", haskellPrefix' = [], parentModule' = [MName \"TestsPerson\",MName \"Name\"], baseName' = FName \"firstname\"}, fieldNumber = FieldId {getFieldId = 1}, wireTag = WireTag {getWireTag = 10}, packedTag = Nothing, wireTagLength = 1, isPacked = False, isRequired = False, canRepeat = False, mightPack = False, typeCode = FieldType {getFieldType = 9}, typeName = Nothing, hsRawDefault = Nothing, hsDefault = Nothing},FieldInfo {fieldName = ProtoFName {protobufName' = FIName \".TestsPerson.Name.lastname\", haskellPrefix' = [], parentModule' = [MName \"TestsPerson\",MName \"Name\"], baseName' = FName \"lastname\"}, fieldNumber = FieldId {getFieldId = 2}, wireTag = WireTag {getWireTag = 18}, packedTag = Nothing, wireTagLength = 1, isPacked = False, isRequired = False, canRepeat = False, mightPack = False, typeCode = FieldType {getFieldType = 9}, typeName = Nothing, hsRawDefault = Nothing, hsDefault = Nothing}], keys = fromList [], extRanges = [], knownKeys = fromList [], storeUnknown = False, lazyFields = False},DescriptorInfo {descName = ProtoName {protobufName = FIName \".TestsPerson.Person\", haskellPrefix = [], parentModule = [MName \"TestsPerson\"], baseName = MName \"Person\"}, descFilePath = [\"TestsPerson\",\"Person.hs\"], isGroup = False, fields = fromList [FieldInfo {fieldName = ProtoFName {protobufName' = FIName \".TestsPerson.Person.name\", haskellPrefix' = [], parentModule' = [MName \"TestsPerson\",MName \"Person\"], baseName' = FName \"name\"}, fieldNumber = FieldId {getFieldId = 1}, wireTag = WireTag {getWireTag = 10}, packedTag = Nothing, wireTagLength = 1, isPacked = False, isRequired = True, canRepeat = False, mightPack = False, typeCode = FieldType {getFieldType = 11}, typeName = Just (ProtoName {protobufName = FIName \".TestsPerson.Name\", haskellPrefix = [], parentModule = [MName \"TestsPerson\"], baseName = MName \"Name\"}), hsRawDefault = Nothing, hsDefault = Nothing},FieldInfo {fieldName = ProtoFName {protobufName' = FIName \".TestsPerson.Person.id\", haskellPrefix' = [], parentModule' = [MName \"TestsPerson\",MName \"Person\"], baseName' = FName \"id\"}, fieldNumber = FieldId {getFieldId = 2}, wireTag = WireTag {getWireTag = 16}, packedTag = Nothing, wireTagLength = 1, isPacked = False, isRequired = True, canRepeat = False, mightPack = False, typeCode = FieldType {getFieldType = 5}, typeName = Nothing, hsRawDefault = Nothing, hsDefault = Nothing},FieldInfo {fieldName = ProtoFName {protobufName' = FIName \".TestsPerson.Person.email\", haskellPrefix' = [], parentModule' = [MName \"TestsPerson\",MName \"Person\"], baseName' = FName \"email\"}, fieldNumber = FieldId {getFieldId = 3}, wireTag = WireTag {getWireTag = 26}, packedTag = Nothing, wireTagLength = 1, isPacked = False, isRequired = False, canRepeat = False, mightPack = False, typeCode = FieldType {getFieldType = 9}, typeName = Nothing, hsRawDefault = Nothing, hsDefault = Nothing}], keys = fromList [], extRanges = [], knownKeys = fromList [], storeUnknown = False, lazyFields = False}], enums = [], knownKeyMap = fromList []}"
 
fileDescriptorProto :: FileDescriptorProto
fileDescriptorProto
 = P'.getFromBS (P'.wireGet 11)
    (P'.pack
      "\135\SOH\n\DC2tests/person.proto\"+\n\EOTName\DC2\DC1\n\tfirstname\CAN\SOH \SOH(\t\DC2\DLE\n\blastname\CAN\STX \SOH(\t\"D\n\ACKPerson\DC2\US\n\EOTname\CAN\SOH \STX(\v2\DC1.TestsPerson.Name\DC2\n\n\STXid\CAN\STX \STX(\ENQ\DC2\r\n\ENQemail\CAN\ETX \SOH(\t")