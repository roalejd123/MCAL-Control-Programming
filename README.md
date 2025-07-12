# MCAL Control Programming with AURIX TC234LP

🚗 **Project Overview**
- Infineon AURIX TC234LP MCU를 기반으로 MCAL(Microcontroller Abstraction Layer) 제어를 연습하는 프로젝트입니다.
- EB Tresos를 통한 MCAL 코드 생성, Aurix Development Studio를 이용한 빌드, Trace32를 통한 Flash & Debug, CAN, ADC, SPI, WDG 등의 기본 모듈을 구성하고 테스트합니다.

---

## ⚙️ Development Environment
- MCU : Infineon TC234LP
- IDE : Aurix Development Studio
- MCAL Config : EB Tresos
- Debugger : Trace32
- CAN Tool : Vector CANcase (VN1610)

---

## 🚀 Features
- ✅ **GPT** : 1ms Timer Interrupt 처리
- ✅ **ADC** : 하드웨어 전압 (IGN, Battery) 측정
- ✅ **DIO** : Inhibit 핀을 통한 ECU Off
- ✅ **FLS/FEE** : Flash/EEPROM 비휘발성 데이터 저장 (점화 사이클 카운터)
- ✅ **SPI** : 6축 센서 (ASM330LHH) 데이터 수집
- ✅ **CAN** : 신호 수신 및 +1 처리 후 200ms 주기 전송
- ✅ **WDG** : Watchdog을 통한 시스템 보호 및 강제 리셋
- ✅ **XCP** : CAN Calibration Protocol 연동 (AliveCount 조작)

---

## 🗂 Project Structure
📦MCAL_Control_Programming
┣ 📁0_Rte : SWC 간 Interface
┣ 📁1_Common : 공통 Define 및 API
┣ 📁2_App
┃ ┣ 📁BswCom : CAN 통신
┃ ┣ 📁BswDcm : 진단 통신
┣ 📁3_EcuAbs : MCAL API 기반 동작
┣ 📁4_Cdd
┃ ┣ 📁CcpCustom : CCP 프로토콜
┣ 📁5_Bsw
┃ ┣ 📁MCalTraining: EB Tresos 생성 코드
┃ ┣ 📁Service : Infineon 제공 코드
┣ 📄ScuMain.c : 메인 루프
┣ 📄tc23x.lsl : Linker Script
┣ 📄SCU_Gen6_Training.lsl
