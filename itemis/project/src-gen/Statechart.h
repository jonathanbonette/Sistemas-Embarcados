/* Generated by itemis CREATE code generator. */

#ifndef STATECHART_H_
#define STATECHART_H_

/*!
Forward declaration for the Statechart state machine.
*/
class Statechart;


#include <deque>
#include "../src/sc_types.h"
#include "../src/sc_statemachine.h"
#include "../src/sc_eventdriven.h"
#include "../src/sc_timer.h"
#include <string.h>

/*! \file
Header of the state machine 'Statechart'.
*/


#ifndef SCT_EVENTS_STATECHART_H
#define SCT_EVENTS_STATECHART_H
#ifndef SC_INVALID_EVENT_VALUE
#define SC_INVALID_EVENT_VALUE 0
#endif

namespace statechart_events
{
typedef enum  {
	invalid_event = SC_INVALID_EVENT_VALUE,
	menu,
	standard_process,
	heating,
	resting,
	heating_2,
	resting_2,
	idle,
	custom_setup,
	set_temperature,
	set_time,
	set_temperature_2,
	set_time_2,
	add_step,
	standard_process_custom,
	finish_process,
	finish_process_idle,
	start_button,
	exit_process,
	recipe_1,
	recipe_2,
	recipe_3,
	recipe_4,
	recipe_5,
	recipe_back_menu,
	recipe_1_process,
	recipe_2_process,
	recipe_3_process,
	recipe_4_process,
	recipe_5_process,
	start_first_step,
	step_finished,
	finished_process,
	keypad_input_confirm,
	keypad_input_cancel,
	go_to_loop,
	temp_finished,
	loop_finished,
	start_recipe_custom,
	go_to_menu,
	Statechart_main_region_INIT_SYSTEM_time_event_0,
	Statechart_main_region_FINISHED_MESSAGE_time_event_0
} StatechartEventName;

class SctEvent
{
	public:
		SctEvent(StatechartEventName name_) : name(name_){}
		virtual ~SctEvent(){}
		const StatechartEventName name;
		
};
		
template <typename T>
class TypedSctEvent : public SctEvent
{
	public:
		TypedSctEvent(StatechartEventName name_, T value_) :
			SctEvent(name_),
			value(value_)
			{}
		virtual ~TypedSctEvent(){}
		const T value;
};

class SctEvent__menu : public SctEvent
{
	public:
		SctEvent__menu(StatechartEventName name_) : SctEvent(name_){};
};
class SctEvent__standard_process : public SctEvent
{
	public:
		SctEvent__standard_process(StatechartEventName name_) : SctEvent(name_){};
};
class SctEvent__heating : public SctEvent
{
	public:
		SctEvent__heating(StatechartEventName name_) : SctEvent(name_){};
};
class SctEvent__resting : public SctEvent
{
	public:
		SctEvent__resting(StatechartEventName name_) : SctEvent(name_){};
};
class SctEvent__heating_2 : public SctEvent
{
	public:
		SctEvent__heating_2(StatechartEventName name_) : SctEvent(name_){};
};
class SctEvent__resting_2 : public SctEvent
{
	public:
		SctEvent__resting_2(StatechartEventName name_) : SctEvent(name_){};
};
class SctEvent__idle : public SctEvent
{
	public:
		SctEvent__idle(StatechartEventName name_) : SctEvent(name_){};
};
class SctEvent__custom_setup : public SctEvent
{
	public:
		SctEvent__custom_setup(StatechartEventName name_) : SctEvent(name_){};
};
class SctEvent__set_temperature : public SctEvent
{
	public:
		SctEvent__set_temperature(StatechartEventName name_) : SctEvent(name_){};
};
class SctEvent__set_time : public SctEvent
{
	public:
		SctEvent__set_time(StatechartEventName name_) : SctEvent(name_){};
};
class SctEvent__set_temperature_2 : public SctEvent
{
	public:
		SctEvent__set_temperature_2(StatechartEventName name_) : SctEvent(name_){};
};
class SctEvent__set_time_2 : public SctEvent
{
	public:
		SctEvent__set_time_2(StatechartEventName name_) : SctEvent(name_){};
};
class SctEvent__add_step : public SctEvent
{
	public:
		SctEvent__add_step(StatechartEventName name_) : SctEvent(name_){};
};
class SctEvent__standard_process_custom : public SctEvent
{
	public:
		SctEvent__standard_process_custom(StatechartEventName name_) : SctEvent(name_){};
};
class SctEvent__finish_process : public SctEvent
{
	public:
		SctEvent__finish_process(StatechartEventName name_) : SctEvent(name_){};
};
class SctEvent__finish_process_idle : public SctEvent
{
	public:
		SctEvent__finish_process_idle(StatechartEventName name_) : SctEvent(name_){};
};
class SctEvent__start_button : public SctEvent
{
	public:
		SctEvent__start_button(StatechartEventName name_) : SctEvent(name_){};
};
class SctEvent__exit_process : public SctEvent
{
	public:
		SctEvent__exit_process(StatechartEventName name_) : SctEvent(name_){};
};
class SctEvent__recipe_1 : public SctEvent
{
	public:
		SctEvent__recipe_1(StatechartEventName name_) : SctEvent(name_){};
};
class SctEvent__recipe_2 : public SctEvent
{
	public:
		SctEvent__recipe_2(StatechartEventName name_) : SctEvent(name_){};
};
class SctEvent__recipe_3 : public SctEvent
{
	public:
		SctEvent__recipe_3(StatechartEventName name_) : SctEvent(name_){};
};
class SctEvent__recipe_4 : public SctEvent
{
	public:
		SctEvent__recipe_4(StatechartEventName name_) : SctEvent(name_){};
};
class SctEvent__recipe_5 : public SctEvent
{
	public:
		SctEvent__recipe_5(StatechartEventName name_) : SctEvent(name_){};
};
class SctEvent__recipe_back_menu : public SctEvent
{
	public:
		SctEvent__recipe_back_menu(StatechartEventName name_) : SctEvent(name_){};
};
class SctEvent__recipe_1_process : public SctEvent
{
	public:
		SctEvent__recipe_1_process(StatechartEventName name_) : SctEvent(name_){};
};
class SctEvent__recipe_2_process : public SctEvent
{
	public:
		SctEvent__recipe_2_process(StatechartEventName name_) : SctEvent(name_){};
};
class SctEvent__recipe_3_process : public SctEvent
{
	public:
		SctEvent__recipe_3_process(StatechartEventName name_) : SctEvent(name_){};
};
class SctEvent__recipe_4_process : public SctEvent
{
	public:
		SctEvent__recipe_4_process(StatechartEventName name_) : SctEvent(name_){};
};
class SctEvent__recipe_5_process : public SctEvent
{
	public:
		SctEvent__recipe_5_process(StatechartEventName name_) : SctEvent(name_){};
};
class SctEvent__start_first_step : public SctEvent
{
	public:
		SctEvent__start_first_step(StatechartEventName name_) : SctEvent(name_){};
};
class SctEvent__step_finished : public SctEvent
{
	public:
		SctEvent__step_finished(StatechartEventName name_) : SctEvent(name_){};
};
class SctEvent__finished_process : public SctEvent
{
	public:
		SctEvent__finished_process(StatechartEventName name_) : SctEvent(name_){};
};
class SctEvent__keypad_input_confirm : public SctEvent
{
	public:
		SctEvent__keypad_input_confirm(StatechartEventName name_) : SctEvent(name_){};
};
class SctEvent__keypad_input_cancel : public SctEvent
{
	public:
		SctEvent__keypad_input_cancel(StatechartEventName name_) : SctEvent(name_){};
};
class SctEvent__go_to_loop : public SctEvent
{
	public:
		SctEvent__go_to_loop(StatechartEventName name_) : SctEvent(name_){};
};
class SctEvent__temp_finished : public SctEvent
{
	public:
		SctEvent__temp_finished(StatechartEventName name_) : SctEvent(name_){};
};
class SctEvent__loop_finished : public SctEvent
{
	public:
		SctEvent__loop_finished(StatechartEventName name_) : SctEvent(name_){};
};
class SctEvent__start_recipe_custom : public SctEvent
{
	public:
		SctEvent__start_recipe_custom(StatechartEventName name_) : SctEvent(name_){};
};
class SctEvent__go_to_menu : public SctEvent
{
	public:
		SctEvent__go_to_menu(StatechartEventName name_) : SctEvent(name_){};
};
class TimedSctEvent : public SctEvent
{
	public:
		TimedSctEvent(StatechartEventName name_) : SctEvent(name_){};
};

}
#endif /* SCT_EVENTS_STATECHART_H */


/*! Define indices of states in the StateConfVector */
#define SCVI_MAIN_REGION_IDLE 0
#define SCVI_MAIN_REGION_MENU 0
#define SCVI_MAIN_REGION_EXIT 0
#define SCVI_MAIN_REGION_STANDARD_PROCESS 0
#define SCVI_MAIN_REGION_STANDARD_PROCESS_STANDARD_PROCESS_START_PROCESS 0
#define SCVI_MAIN_REGION_STANDARD_PROCESS_STANDARD_PROCESS_FINISH_PROCESS 0
#define SCVI_MAIN_REGION_STANDARD_PROCESS_STANDARD_PROCESS_CONTROL_PROCESS_LOOP 0
#define SCVI_MAIN_REGION_CUSTOM_SETUP 0
#define SCVI_MAIN_REGION_CUSTOM_SETUP_CUSTOM_SETUP_CUSTOM_SETUP_COMPLETE 0
#define SCVI_MAIN_REGION_CUSTOM_SETUP_CUSTOM_SETUP_NUM_STEPS 0
#define SCVI_MAIN_REGION_CUSTOM_SETUP_CUSTOM_SETUP_LOOP_TEMP_TIME_STEPS 0
#define SCVI_MAIN_REGION_CUSTOM_SETUP_CUSTOM_SETUP_LOOP_TEMP_TIME_STEPS_LOOP_STEPS_TEMP 0
#define SCVI_MAIN_REGION_CUSTOM_SETUP_CUSTOM_SETUP_LOOP_TEMP_TIME_STEPS_LOOP_STEPS_TIME 0
#define SCVI_MAIN_REGION_INIT_SYSTEM 0
#define SCVI_MAIN_REGION_RECIPE_1 0
#define SCVI_MAIN_REGION_RECIPE_2 0
#define SCVI_MAIN_REGION_RECIPE_3 0
#define SCVI_MAIN_REGION_RECIPE_4 0
#define SCVI_MAIN_REGION_RECIPE_5 0
#define SCVI_MAIN_REGION_FINISHED_MESSAGE 0


class Statechart : public sc::timer::TimedInterface, public sc::EventDrivenInterface
{
	public:
		Statechart();
		
		virtual ~Statechart();
		
		/*! Enumeration of all states */ 
		typedef enum
		{
			Statechart_last_state,
			main_region_IDLE,
			main_region_MENU,
			main_region_EXIT,
			main_region_STANDARD_PROCESS,
			main_region_STANDARD_PROCESS_standard_process_START_PROCESS,
			main_region_STANDARD_PROCESS_standard_process_FINISH_PROCESS,
			main_region_STANDARD_PROCESS_standard_process_CONTROL_PROCESS_LOOP,
			main_region_CUSTOM_SETUP,
			main_region_CUSTOM_SETUP_custom_setup_CUSTOM_SETUP_COMPLETE,
			main_region_CUSTOM_SETUP_custom_setup_NUM_STEPS,
			main_region_CUSTOM_SETUP_custom_setup_LOOP_TEMP_TIME_STEPS,
			main_region_CUSTOM_SETUP_custom_setup_LOOP_TEMP_TIME_STEPS_loop_steps_TEMP,
			main_region_CUSTOM_SETUP_custom_setup_LOOP_TEMP_TIME_STEPS_loop_steps_TIME,
			main_region_INIT_SYSTEM,
			main_region_RECIPE_1,
			main_region_RECIPE_2,
			main_region_RECIPE_3,
			main_region_RECIPE_4,
			main_region_RECIPE_5,
			main_region_FINISHED_MESSAGE
		} StatechartStates;
					
		static const sc_integer numStates = 20;
		
		
		/*! Raises the in event 'menu' that is defined in the default interface scope. */
		void raiseMenu();
		
		/*! Raises the in event 'standard_process' that is defined in the default interface scope. */
		void raiseStandard_process();
		
		/*! Raises the in event 'heating' that is defined in the default interface scope. */
		void raiseHeating();
		
		/*! Raises the in event 'resting' that is defined in the default interface scope. */
		void raiseResting();
		
		/*! Raises the in event 'heating_2' that is defined in the default interface scope. */
		void raiseHeating_2();
		
		/*! Raises the in event 'resting_2' that is defined in the default interface scope. */
		void raiseResting_2();
		
		/*! Raises the in event 'idle' that is defined in the default interface scope. */
		void raiseIdle();
		
		/*! Raises the in event 'custom_setup' that is defined in the default interface scope. */
		void raiseCustom_setup();
		
		/*! Raises the in event 'set_temperature' that is defined in the default interface scope. */
		void raiseSet_temperature();
		
		/*! Raises the in event 'set_time' that is defined in the default interface scope. */
		void raiseSet_time();
		
		/*! Raises the in event 'set_temperature_2' that is defined in the default interface scope. */
		void raiseSet_temperature_2();
		
		/*! Raises the in event 'set_time_2' that is defined in the default interface scope. */
		void raiseSet_time_2();
		
		/*! Raises the in event 'add_step' that is defined in the default interface scope. */
		void raiseAdd_step();
		
		/*! Raises the in event 'standard_process_custom' that is defined in the default interface scope. */
		void raiseStandard_process_custom();
		
		/*! Raises the in event 'finish_process' that is defined in the default interface scope. */
		void raiseFinish_process();
		
		/*! Raises the in event 'finish_process_idle' that is defined in the default interface scope. */
		void raiseFinish_process_idle();
		
		/*! Raises the in event 'start_button' that is defined in the default interface scope. */
		void raiseStart_button();
		
		/*! Raises the in event 'exit_process' that is defined in the default interface scope. */
		void raiseExit_process();
		
		/*! Raises the in event 'recipe_1' that is defined in the default interface scope. */
		void raiseRecipe_1();
		
		/*! Raises the in event 'recipe_2' that is defined in the default interface scope. */
		void raiseRecipe_2();
		
		/*! Raises the in event 'recipe_3' that is defined in the default interface scope. */
		void raiseRecipe_3();
		
		/*! Raises the in event 'recipe_4' that is defined in the default interface scope. */
		void raiseRecipe_4();
		
		/*! Raises the in event 'recipe_5' that is defined in the default interface scope. */
		void raiseRecipe_5();
		
		/*! Raises the in event 'recipe_back_menu' that is defined in the default interface scope. */
		void raiseRecipe_back_menu();
		
		/*! Raises the in event 'recipe_1_process' that is defined in the default interface scope. */
		void raiseRecipe_1_process();
		
		/*! Raises the in event 'recipe_2_process' that is defined in the default interface scope. */
		void raiseRecipe_2_process();
		
		/*! Raises the in event 'recipe_3_process' that is defined in the default interface scope. */
		void raiseRecipe_3_process();
		
		/*! Raises the in event 'recipe_4_process' that is defined in the default interface scope. */
		void raiseRecipe_4_process();
		
		/*! Raises the in event 'recipe_5_process' that is defined in the default interface scope. */
		void raiseRecipe_5_process();
		
		/*! Raises the in event 'start_first_step' that is defined in the default interface scope. */
		void raiseStart_first_step();
		
		/*! Raises the in event 'step_finished' that is defined in the default interface scope. */
		void raiseStep_finished();
		
		/*! Raises the in event 'finished_process' that is defined in the default interface scope. */
		void raiseFinished_process();
		
		/*! Raises the in event 'keypad_input_confirm' that is defined in the default interface scope. */
		void raiseKeypad_input_confirm();
		
		/*! Raises the in event 'keypad_input_cancel' that is defined in the default interface scope. */
		void raiseKeypad_input_cancel();
		
		/*! Raises the in event 'go_to_loop' that is defined in the default interface scope. */
		void raiseGo_to_loop();
		
		/*! Raises the in event 'temp_finished' that is defined in the default interface scope. */
		void raiseTemp_finished();
		
		/*! Raises the in event 'loop_finished' that is defined in the default interface scope. */
		void raiseLoop_finished();
		
		/*! Raises the in event 'start_recipe_custom' that is defined in the default interface scope. */
		void raiseStart_recipe_custom();
		
		/*! Raises the in event 'go_to_menu' that is defined in the default interface scope. */
		void raiseGo_to_menu();
		
		/*! Gets the value of the variable 'output' that is defined in the default interface scope. */
		sc_integer getOutput() const;
		/*! Sets the value of the variable 'output' that is defined in the default interface scope. */
		void setOutput(sc_integer output);
		/*! Gets the value of the variable 'delay' that is defined in the default interface scope. */
		sc_integer getDelay() const;
		/*! Sets the value of the variable 'delay' that is defined in the default interface scope. */
		void setDelay(sc_integer delay);
		/*! Gets the value of the variable 'low' that is defined in the default interface scope. */
		sc_integer getLow() const;
		/*! Sets the value of the variable 'low' that is defined in the default interface scope. */
		void setLow(sc_integer low);
		/*! Gets the value of the variable 'high' that is defined in the default interface scope. */
		sc_integer getHigh() const;
		/*! Sets the value of the variable 'high' that is defined in the default interface scope. */
		void setHigh(sc_integer high);
		/*! Gets the value of the variable 'led_pin' that is defined in the default interface scope. */
		sc_integer getLed_pin() const;
		/*! Sets the value of the variable 'led_pin' that is defined in the default interface scope. */
		void setLed_pin(sc_integer led_pin);
		/*! Gets the value of the variable 'water_sensor_pin' that is defined in the default interface scope. */
		sc_integer getWater_sensor_pin() const;
		/*! Sets the value of the variable 'water_sensor_pin' that is defined in the default interface scope. */
		void setWater_sensor_pin(sc_integer water_sensor_pin);
		/*! Gets the value of the variable 'semaphore_red_pin' that is defined in the default interface scope. */
		sc_integer getSemaphore_red_pin() const;
		/*! Sets the value of the variable 'semaphore_red_pin' that is defined in the default interface scope. */
		void setSemaphore_red_pin(sc_integer semaphore_red_pin);
		/*! Gets the value of the variable 'semaphore_yellow_pin' that is defined in the default interface scope. */
		sc_integer getSemaphore_yellow_pin() const;
		/*! Sets the value of the variable 'semaphore_yellow_pin' that is defined in the default interface scope. */
		void setSemaphore_yellow_pin(sc_integer semaphore_yellow_pin);
		/*! Gets the value of the variable 'semaphore_green_pin' that is defined in the default interface scope. */
		sc_integer getSemaphore_green_pin() const;
		/*! Sets the value of the variable 'semaphore_green_pin' that is defined in the default interface scope. */
		void setSemaphore_green_pin(sc_integer semaphore_green_pin);
		/*! Gets the value of the variable 'heater_pwm_pin' that is defined in the default interface scope. */
		sc_integer getHeater_pwm_pin() const;
		/*! Sets the value of the variable 'heater_pwm_pin' that is defined in the default interface scope. */
		void setHeater_pwm_pin(sc_integer heater_pwm_pin);
		/*! Gets the value of the variable 'pwm_frequency' that is defined in the default interface scope. */
		sc_integer getPwm_frequency() const;
		/*! Sets the value of the variable 'pwm_frequency' that is defined in the default interface scope. */
		void setPwm_frequency(sc_integer pwm_frequency);
		/*! Gets the value of the variable 'pwm_resolution_bits' that is defined in the default interface scope. */
		sc_integer getPwm_resolution_bits() const;
		/*! Sets the value of the variable 'pwm_resolution_bits' that is defined in the default interface scope. */
		void setPwm_resolution_bits(sc_integer pwm_resolution_bits);
		/*! Gets the value of the variable 'custom_num_steps' that is defined in the default interface scope. */
		sc_integer getCustom_num_steps() const;
		/*! Sets the value of the variable 'custom_num_steps' that is defined in the default interface scope. */
		void setCustom_num_steps(sc_integer custom_num_steps);
		/*! Gets the value of the variable 'current_custom_step_idx' that is defined in the default interface scope. */
		sc_integer getCurrent_custom_step_idx() const;
		/*! Sets the value of the variable 'current_custom_step_idx' that is defined in the default interface scope. */
		void setCurrent_custom_step_idx(sc_integer current_custom_step_idx);
		/*! Gets the value of the variable 'received_value' that is defined in the default interface scope. */
		sc_integer getReceived_value() const;
		/*! Sets the value of the variable 'received_value' that is defined in the default interface scope. */
		void setReceived_value(sc_integer received_value);
		//! Inner class for default interface scope operation callbacks.
		class OperationCallback
		{
			public:
				virtual ~OperationCallback() = 0;
				
				virtual void shutdownSystem() = 0;
				
				virtual void heat(sc_integer value) = 0;
				
				virtual void time(sc_integer value) = 0;
				
				virtual void setTemperature(sc_integer value) = 0;
				
				virtual void setTime(sc_integer value) = 0;
				
				virtual void initializeSetupProcess() = 0;
				
				virtual void showState(sc_string state) = 0;
				
				virtual void digitalWrite(sc_integer pin, sc_integer value) = 0;
				
				virtual void pinMode(sc_integer pin, sc_integer mode) = 0;
				
				virtual void beginWaterSensor() = 0;
				
				virtual void setupHeaterPWM() = 0;
				
				virtual void showStartup() = 0;
				
				virtual void showIdleScreen() = 0;
				
				virtual void beginDisplay() = 0;
				
				virtual void beginMatrix() = 0;
				
				virtual void beginSemaphore() = 0;
				
				virtual void showRecipes() = 0;
				
				virtual void showRecipe(sc_integer recipe) = 0;
				
				virtual void initializeProcess() = 0;
				
				virtual void showFinished() = 0;
				
				virtual void startNextRecipeStep(sc_integer recipeIndex) = 0;
				
				virtual sc_boolean hasMoreSteps() = 0;
				
				virtual sc_integer getCurrentRecipeIndex() = 0;
				
				virtual sc_integer getCurrentStepIndex() = 0;
				
				virtual void showProcessStatus(sc_integer currentTemp, sc_integer targetTemp, sc_integer remainingMinutes, sc_integer remainingSeconds, sc_string stepName, sc_integer stepNum, sc_integer totalSteps, sc_boolean isRamping) = 0;
				
				virtual void controlHeaterPWM(sc_integer duty_cycle) = 0;
				
				virtual void showCustomSetup_GetNumSteps() = 0;
				
				virtual sc_boolean isValidNumSteps(sc_integer value) = 0;
				
				virtual void setNumCustomSteps(sc_integer value) = 0;
				
				virtual void initializeStepDataCollection() = 0;
				
				virtual void showCustomSetup_PromptTemp(sc_integer stepIdx) = 0;
				
				virtual void showCustomSetup_PromptTime(sc_integer stepIdx) = 0;
				
				virtual sc_boolean isValidDataInput(sc_integer value) = 0;
				
				virtual void processTemperature(sc_integer stepIdx, sc_integer value) = 0;
				
				virtual void processDuration(sc_integer stepIdx, sc_integer value) = 0;
				
				virtual sc_boolean hasMoreStepsToDefine() = 0;
				
				virtual void advanceToNextCustomStep() = 0;
				
				virtual void showCustomSetup_Summary() = 0;
				
				virtual void showFinishedMessage() = 0;
				
				
		};
		
		/*! Set the working instance of the operation callback interface 'OperationCallback'. */
		void setOperationCallback(OperationCallback* operationCallback);
		
		/*! Can be used by the client code to trigger a run to completion step without raising an event. */
		void triggerWithoutEvent();
		
		/*
		 * Functions inherited from StatemachineInterface
		 */
		virtual void enter();
		
		virtual void exit();
		
		/*!
		 * Checks if the state machine is active (until 2.4.1 this method was used for states).
		 * A state machine is active if it has been entered. It is inactive if it has not been entered at all or if it has been exited.
		 */
		virtual sc_boolean isActive() const;
		
		
		/*!
		* Checks if all active states are final. 
		* If there are no active states then the state machine is considered being inactive. In this case this method returns false.
		*/
		virtual sc_boolean isFinal() const;
		
		/*! 
		 * Checks if member of the state machine must be set. For example an operation callback.
		 */
		sc_boolean check();
		
		/*
		 * Functions inherited from TimedStatemachineInterface
		 */
		virtual void setTimerService(sc::timer::TimerServiceInterface* timerService_);
		
		virtual sc::timer::TimerServiceInterface* getTimerService();
		
		virtual void raiseTimeEvent(sc_eventid event);
		
		virtual sc_integer getNumberOfParallelTimeEvents();
		
		
		
		/*! Checks if the specified state is active (until 2.4.1 the used method for states was calles isActive()). */
		sc_boolean isStateActive(StatechartStates state) const;
		
		//! number of time events used by the state machine.
		static const sc_integer timeEventsCount = 2;
		
		//! number of time events that can be active at once.
		static const sc_integer parallelTimeEventsCount = 1;
		
		
	protected:
		
		
	private:
		Statechart(const Statechart &rhs);
		Statechart& operator=(const Statechart&);
		
		sc_boolean internal_dispatch_event(statechart_events::SctEvent * event);
		
		/*! Raises the in event 'menu' that is defined in the default interface scope. */
		void internal_raiseMenu();
		sc_boolean menu_raised;
		/*! Raises the in event 'standard_process' that is defined in the default interface scope. */
		void internal_raiseStandard_process();
		sc_boolean standard_process_raised;
		/*! Raises the in event 'heating' that is defined in the default interface scope. */
		void internal_raiseHeating();
		sc_boolean heating_raised;
		/*! Raises the in event 'resting' that is defined in the default interface scope. */
		void internal_raiseResting();
		sc_boolean resting_raised;
		/*! Raises the in event 'heating_2' that is defined in the default interface scope. */
		void internal_raiseHeating_2();
		sc_boolean heating_2_raised;
		/*! Raises the in event 'resting_2' that is defined in the default interface scope. */
		void internal_raiseResting_2();
		sc_boolean resting_2_raised;
		/*! Raises the in event 'idle' that is defined in the default interface scope. */
		void internal_raiseIdle();
		sc_boolean idle_raised;
		/*! Raises the in event 'custom_setup' that is defined in the default interface scope. */
		void internal_raiseCustom_setup();
		sc_boolean custom_setup_raised;
		/*! Raises the in event 'set_temperature' that is defined in the default interface scope. */
		void internal_raiseSet_temperature();
		sc_boolean set_temperature_raised;
		/*! Raises the in event 'set_time' that is defined in the default interface scope. */
		void internal_raiseSet_time();
		sc_boolean set_time_raised;
		/*! Raises the in event 'set_temperature_2' that is defined in the default interface scope. */
		void internal_raiseSet_temperature_2();
		sc_boolean set_temperature_2_raised;
		/*! Raises the in event 'set_time_2' that is defined in the default interface scope. */
		void internal_raiseSet_time_2();
		sc_boolean set_time_2_raised;
		/*! Raises the in event 'add_step' that is defined in the default interface scope. */
		void internal_raiseAdd_step();
		sc_boolean add_step_raised;
		/*! Raises the in event 'standard_process_custom' that is defined in the default interface scope. */
		void internal_raiseStandard_process_custom();
		sc_boolean standard_process_custom_raised;
		/*! Raises the in event 'finish_process' that is defined in the default interface scope. */
		void internal_raiseFinish_process();
		sc_boolean finish_process_raised;
		/*! Raises the in event 'finish_process_idle' that is defined in the default interface scope. */
		void internal_raiseFinish_process_idle();
		sc_boolean finish_process_idle_raised;
		sc_integer output;
		sc_integer delay;
		sc_integer low;
		sc_integer high;
		sc_integer led_pin;
		sc_integer water_sensor_pin;
		sc_integer semaphore_red_pin;
		sc_integer semaphore_yellow_pin;
		sc_integer semaphore_green_pin;
		/*! Raises the in event 'start_button' that is defined in the default interface scope. */
		void internal_raiseStart_button();
		sc_boolean start_button_raised;
		/*! Raises the in event 'exit_process' that is defined in the default interface scope. */
		void internal_raiseExit_process();
		sc_boolean exit_process_raised;
		/*! Raises the in event 'recipe_1' that is defined in the default interface scope. */
		void internal_raiseRecipe_1();
		sc_boolean recipe_1_raised;
		/*! Raises the in event 'recipe_2' that is defined in the default interface scope. */
		void internal_raiseRecipe_2();
		sc_boolean recipe_2_raised;
		/*! Raises the in event 'recipe_3' that is defined in the default interface scope. */
		void internal_raiseRecipe_3();
		sc_boolean recipe_3_raised;
		/*! Raises the in event 'recipe_4' that is defined in the default interface scope. */
		void internal_raiseRecipe_4();
		sc_boolean recipe_4_raised;
		/*! Raises the in event 'recipe_5' that is defined in the default interface scope. */
		void internal_raiseRecipe_5();
		sc_boolean recipe_5_raised;
		/*! Raises the in event 'recipe_back_menu' that is defined in the default interface scope. */
		void internal_raiseRecipe_back_menu();
		sc_boolean recipe_back_menu_raised;
		/*! Raises the in event 'recipe_1_process' that is defined in the default interface scope. */
		void internal_raiseRecipe_1_process();
		sc_boolean recipe_1_process_raised;
		/*! Raises the in event 'recipe_2_process' that is defined in the default interface scope. */
		void internal_raiseRecipe_2_process();
		sc_boolean recipe_2_process_raised;
		/*! Raises the in event 'recipe_3_process' that is defined in the default interface scope. */
		void internal_raiseRecipe_3_process();
		sc_boolean recipe_3_process_raised;
		/*! Raises the in event 'recipe_4_process' that is defined in the default interface scope. */
		void internal_raiseRecipe_4_process();
		sc_boolean recipe_4_process_raised;
		/*! Raises the in event 'recipe_5_process' that is defined in the default interface scope. */
		void internal_raiseRecipe_5_process();
		sc_boolean recipe_5_process_raised;
		sc_integer heater_pwm_pin;
		sc_integer pwm_frequency;
		sc_integer pwm_resolution_bits;
		/*! Raises the in event 'start_first_step' that is defined in the default interface scope. */
		void internal_raiseStart_first_step();
		sc_boolean start_first_step_raised;
		/*! Raises the in event 'step_finished' that is defined in the default interface scope. */
		void internal_raiseStep_finished();
		sc_boolean step_finished_raised;
		/*! Raises the in event 'finished_process' that is defined in the default interface scope. */
		void internal_raiseFinished_process();
		sc_boolean finished_process_raised;
		sc_integer custom_num_steps;
		sc_integer current_custom_step_idx;
		sc_integer received_value;
		/*! Raises the in event 'keypad_input_confirm' that is defined in the default interface scope. */
		void internal_raiseKeypad_input_confirm();
		sc_boolean keypad_input_confirm_raised;
		/*! Raises the in event 'keypad_input_cancel' that is defined in the default interface scope. */
		void internal_raiseKeypad_input_cancel();
		sc_boolean keypad_input_cancel_raised;
		/*! Raises the in event 'go_to_loop' that is defined in the default interface scope. */
		void internal_raiseGo_to_loop();
		sc_boolean go_to_loop_raised;
		/*! Raises the in event 'temp_finished' that is defined in the default interface scope. */
		void internal_raiseTemp_finished();
		sc_boolean temp_finished_raised;
		/*! Raises the in event 'loop_finished' that is defined in the default interface scope. */
		void internal_raiseLoop_finished();
		sc_boolean loop_finished_raised;
		/*! Raises the in event 'start_recipe_custom' that is defined in the default interface scope. */
		void internal_raiseStart_recipe_custom();
		sc_boolean start_recipe_custom_raised;
		/*! Raises the in event 'go_to_menu' that is defined in the default interface scope. */
		void internal_raiseGo_to_menu();
		sc_boolean go_to_menu_raised;
		sc_boolean iface_dispatch_event(statechart_events::SctEvent * event);
		
		
		//! the maximum number of orthogonal states defines the dimension of the state configuration vector.
		static const sc_ushort maxOrthogonalStates = 1;
		
		sc::timer::TimerServiceInterface* timerService;
		sc_boolean timeEvents[timeEventsCount];
		
		
		StatechartStates stateConfVector[maxOrthogonalStates];
		
		
		
		OperationCallback* ifaceOperationCallback;
		
		sc_boolean isExecuting;
		
		
		
		// prototypes of all internal functions
		
		void enact_main_region_IDLE();
		void enact_main_region_MENU();
		void enact_main_region_EXIT();
		void enact_main_region_STANDARD_PROCESS();
		void enact_main_region_STANDARD_PROCESS_standard_process_START_PROCESS();
		void enact_main_region_STANDARD_PROCESS_standard_process_FINISH_PROCESS();
		void enact_main_region_STANDARD_PROCESS_standard_process_CONTROL_PROCESS_LOOP();
		void enact_main_region_CUSTOM_SETUP_custom_setup_CUSTOM_SETUP_COMPLETE();
		void enact_main_region_CUSTOM_SETUP_custom_setup_NUM_STEPS();
		void enact_main_region_CUSTOM_SETUP_custom_setup_LOOP_TEMP_TIME_STEPS();
		void enact_main_region_CUSTOM_SETUP_custom_setup_LOOP_TEMP_TIME_STEPS_loop_steps_TEMP();
		void enact_main_region_CUSTOM_SETUP_custom_setup_LOOP_TEMP_TIME_STEPS_loop_steps_TIME();
		void enact_main_region_INIT_SYSTEM();
		void enact_main_region_RECIPE_1();
		void enact_main_region_RECIPE_2();
		void enact_main_region_RECIPE_3();
		void enact_main_region_RECIPE_4();
		void enact_main_region_RECIPE_5();
		void enact_main_region_FINISHED_MESSAGE();
		void exact_main_region_INIT_SYSTEM();
		void exact_main_region_FINISHED_MESSAGE();
		void enseq_main_region_IDLE_default();
		void enseq_main_region_MENU_default();
		void enseq_main_region_EXIT_default();
		void enseq_main_region_STANDARD_PROCESS_default();
		void enseq_main_region_STANDARD_PROCESS_standard_process_START_PROCESS_default();
		void enseq_main_region_STANDARD_PROCESS_standard_process_FINISH_PROCESS_default();
		void enseq_main_region_STANDARD_PROCESS_standard_process_CONTROL_PROCESS_LOOP_default();
		void enseq_main_region_CUSTOM_SETUP_default();
		void enseq_main_region_CUSTOM_SETUP_custom_setup_CUSTOM_SETUP_COMPLETE_default();
		void enseq_main_region_CUSTOM_SETUP_custom_setup_NUM_STEPS_default();
		void enseq_main_region_CUSTOM_SETUP_custom_setup_LOOP_TEMP_TIME_STEPS_default();
		void enseq_main_region_CUSTOM_SETUP_custom_setup_LOOP_TEMP_TIME_STEPS_loop_steps_TEMP_default();
		void enseq_main_region_CUSTOM_SETUP_custom_setup_LOOP_TEMP_TIME_STEPS_loop_steps_TIME_default();
		void enseq_main_region_INIT_SYSTEM_default();
		void enseq_main_region_RECIPE_1_default();
		void enseq_main_region_RECIPE_2_default();
		void enseq_main_region_RECIPE_3_default();
		void enseq_main_region_RECIPE_4_default();
		void enseq_main_region_RECIPE_5_default();
		void enseq_main_region_FINISHED_MESSAGE_default();
		void enseq_main_region_default();
		void enseq_main_region_STANDARD_PROCESS_standard_process_default();
		void enseq_main_region_CUSTOM_SETUP_custom_setup_default();
		void enseq_main_region_CUSTOM_SETUP_custom_setup_LOOP_TEMP_TIME_STEPS_loop_steps_default();
		void exseq_main_region_IDLE();
		void exseq_main_region_MENU();
		void exseq_main_region_EXIT();
		void exseq_main_region_STANDARD_PROCESS();
		void exseq_main_region_STANDARD_PROCESS_standard_process_START_PROCESS();
		void exseq_main_region_STANDARD_PROCESS_standard_process_FINISH_PROCESS();
		void exseq_main_region_STANDARD_PROCESS_standard_process_CONTROL_PROCESS_LOOP();
		void exseq_main_region_CUSTOM_SETUP();
		void exseq_main_region_CUSTOM_SETUP_custom_setup_CUSTOM_SETUP_COMPLETE();
		void exseq_main_region_CUSTOM_SETUP_custom_setup_NUM_STEPS();
		void exseq_main_region_CUSTOM_SETUP_custom_setup_LOOP_TEMP_TIME_STEPS();
		void exseq_main_region_CUSTOM_SETUP_custom_setup_LOOP_TEMP_TIME_STEPS_loop_steps_TEMP();
		void exseq_main_region_CUSTOM_SETUP_custom_setup_LOOP_TEMP_TIME_STEPS_loop_steps_TIME();
		void exseq_main_region_INIT_SYSTEM();
		void exseq_main_region_RECIPE_1();
		void exseq_main_region_RECIPE_2();
		void exseq_main_region_RECIPE_3();
		void exseq_main_region_RECIPE_4();
		void exseq_main_region_RECIPE_5();
		void exseq_main_region_FINISHED_MESSAGE();
		void exseq_main_region();
		void exseq_main_region_STANDARD_PROCESS_standard_process();
		void exseq_main_region_CUSTOM_SETUP_custom_setup();
		void exseq_main_region_CUSTOM_SETUP_custom_setup_LOOP_TEMP_TIME_STEPS_loop_steps();
		void react_main_region_STANDARD_PROCESS_standard_process__entry_Default();
		void react_main_region_CUSTOM_SETUP_custom_setup__entry_Default();
		void react_main_region_CUSTOM_SETUP_custom_setup_LOOP_TEMP_TIME_STEPS_loop_steps__entry_Default();
		void react_main_region__entry_Default();
		sc_integer main_region_IDLE_react(const sc_integer transitioned_before);
		sc_integer main_region_MENU_react(const sc_integer transitioned_before);
		sc_integer main_region_STANDARD_PROCESS_standard_process_START_PROCESS_react(const sc_integer transitioned_before);
		sc_integer main_region_STANDARD_PROCESS_standard_process_FINISH_PROCESS_react(const sc_integer transitioned_before);
		sc_integer main_region_STANDARD_PROCESS_standard_process_CONTROL_PROCESS_LOOP_react(const sc_integer transitioned_before);
		sc_integer main_region_CUSTOM_SETUP_react(const sc_integer transitioned_before);
		sc_integer main_region_CUSTOM_SETUP_custom_setup_CUSTOM_SETUP_COMPLETE_react(const sc_integer transitioned_before);
		sc_integer main_region_CUSTOM_SETUP_custom_setup_NUM_STEPS_react(const sc_integer transitioned_before);
		sc_integer main_region_CUSTOM_SETUP_custom_setup_LOOP_TEMP_TIME_STEPS_react(const sc_integer transitioned_before);
		sc_integer main_region_CUSTOM_SETUP_custom_setup_LOOP_TEMP_TIME_STEPS_loop_steps_TEMP_react(const sc_integer transitioned_before);
		sc_integer main_region_CUSTOM_SETUP_custom_setup_LOOP_TEMP_TIME_STEPS_loop_steps_TIME_react(const sc_integer transitioned_before);
		sc_integer main_region_INIT_SYSTEM_react(const sc_integer transitioned_before);
		sc_integer main_region_RECIPE_1_react(const sc_integer transitioned_before);
		sc_integer main_region_RECIPE_2_react(const sc_integer transitioned_before);
		sc_integer main_region_RECIPE_3_react(const sc_integer transitioned_before);
		sc_integer main_region_RECIPE_4_react(const sc_integer transitioned_before);
		sc_integer main_region_RECIPE_5_react(const sc_integer transitioned_before);
		sc_integer main_region_FINISHED_MESSAGE_react(const sc_integer transitioned_before);
		void clearInEvents();
		void microStep();
		void runCycle();
		
		
		statechart_events::SctEvent* getNextEvent();
		sc_boolean dispatch_event(statechart_events::SctEvent * event);
		statechart_events::StatechartEventName getTimedEventName(sc_eventid evid);
		std::deque<statechart_events::SctEvent*> inEventQueue;
		
		
		
		
};


inline Statechart::OperationCallback::~OperationCallback() {}


#endif /* STATECHART_H_ */
